#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root = NULL;
    int choice, value;

    do
    {
        printf("\n1. Create Root");
        printf("\n2. Insert Left of Root");
        printf("\n3. Insert Right of Root");
        printf("\n4. Inorder");
        printf("\n5. Preorder");
        printf("\n6. Postorder");
        printf("\n7. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                root = (struct node*)malloc(sizeof(struct node));

                printf("Enter root value: ");
                scanf("%d", &root->data);

                root->left = NULL;
                root->right = NULL;
                break;

            case 2:
                if(root == NULL)
                {
                    printf("Create root first\n");
                }
                else
                {
                    root->left = (struct node*)malloc(sizeof(struct node));

                    printf("Enter left value: ");
                    scanf("%d", &root->left->data);

                    root->left->left = NULL;
                    root->left->right = NULL;
                }
                break;

            case 3:
                if(root == NULL)
                {
                    printf("Create root first\n");
                }
                else
                {
                    root->right = (struct node*)malloc(sizeof(struct node));

                    printf("Enter right value: ");
                    scanf("%d", &root->right->data);

                    root->right->left = NULL;
                    root->right->right = NULL;
                }
                break;

            case 4:
                printf("Inorder: ");
                inorder(root);
                printf("\n");
                break;

            case 5:
                printf("Preorder: ");
                preorder(root);
                printf("\n");
                break;

            case 6:
                printf("Postorder: ");
                postorder(root);
                printf("\n");
                break;

            case 7:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 7);

    return 0;
}