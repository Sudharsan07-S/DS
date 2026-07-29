#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int precedence(char op)
{
    if(op == '^')
        return 3;
    if(op == '*' || op == '/')
        return 2;
    if(op == '+' || op == '-')
        return 1;
    return 0;
}

int main()
{
    char infix[50], postfix[50], stack[50];
    int top = -1;
    int i = 0, j = 0;

    clrscr();

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while(infix[i] != '\0')
    {
        char ch = infix[i];

        if(isalnum(ch))
        {
            postfix[j++] = ch;
        }
        else if(ch == '(')
        {
            stack[++top] = ch;
        }
        else if(ch == ')')
        {
            while(top != -1 && stack[top] != '(')
            {
                postfix[j++] = stack[top--];
            }
            if(top != -1)
                top--;
        }
        else
        {
            while(top != -1 &&
                  stack[top] != '(' &&
                  precedence(stack[top]) >= precedence(ch))
            {
                postfix[j++] = stack[top--];
            }
            stack[++top] = ch;
        }

        i++;
    }

    while(top != -1)
    {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0';

    printf("\nPostfix Expression: %s", postfix);

    getch();
    return 0;
}
