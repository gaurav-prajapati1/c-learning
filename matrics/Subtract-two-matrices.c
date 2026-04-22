#include <stdio.h>
int main()
{
    int A[10][10], B[10][10];
    int Sum[10][10], Sub[10][10];
    int r, c, i, j;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition and Subtraction
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display Addition Result
    printf("\nAddition of Matrices:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    // Display Subtraction Result
    printf("\nSubtraction of Matrices:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", Sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}