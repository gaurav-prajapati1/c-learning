#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // Input size of first matrix
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // Input size of second matrix
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication condition
    if(c1 != r2)
    {
        printf("Matrix multiplication not possible!");
        return 0;
    }

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix to 0
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            for(k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Result
    printf("\nResultant Matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}