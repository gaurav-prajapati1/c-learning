#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Create new node
struct node* createNode(int value)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// Insert node
struct node* insert(struct node* root, int value)
{
    if(root == NULL)
        return createNode(value);

    if(value < root->data)
        root->left = insert(root->left, value);
    else if(value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Find minimum value node
struct node* findMin(struct node* root)
{
    while(root->left != NULL)
        root = root->left;
    return root;
}

// Delete node
struct node* deleteNode(struct node* root, int value)
{
    struct node* temp;

    if(root == NULL)
        return root;

    if(value < root->data)
        root->left = deleteNode(root->left, value);
    else if(value > root->data)
        root->right = deleteNode(root->right, value);
    else
    {
        // Node with one child or no child
        if(root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children
        temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Inorder traversal
void inorder(struct node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Main menu
int main()
{
    struct node* root = NULL;
    int choice, value;

    while(1)
    {
        printf("\n--- BST MENU ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display (Inorder)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;

            case 3:
                printf("BST elements (Inorder): ");
                inorder(root);
                printf("\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}