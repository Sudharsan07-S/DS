#include <stdio.h>
#include <ctype.h> // for isalnum()
#include <string.h>
#include <stdlib.h>
#define SIZE 10

// Stack implementation

char stack[SIZE];  // stack size declaration
int top = -1;
// push operation 
void push(char ch)
{
	if (top >= SIZE - 1)
	{
		printf ("stack overflow\n");
		return;
	}
	stack[++top];
}
//pop operation
char pop()
{
	if (top == -1)
	{
		return '\0';
	}
//peek operation
char peek() {
	if (top == -1)
	{
		return '0';
	}
	return stack[top];
}	
//precedence function
int precedence(char ch)
{
	switch (ch)
	{
		case '^':
		 return 3;
		case'*':
		case'/':
		return 2;
		case'+':
		case'-':
		return 1;
		default:
		return 0;	
			
		 
	}
}
infix to postfix conversion function
void infixTopostfix(char* infix ,char)

}