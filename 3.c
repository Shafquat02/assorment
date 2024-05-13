#include <stdio.h>

int main()
{
    int arr[10][10], transpose[10][10], i, j, row, col;

    printf("Enter number of rows and columns of array :: ");
    scanf("%d%d", &row, &col);

    printf("\nEnter %d elements in array :: \n", row*col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("\nTranspose of array is :: \n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}