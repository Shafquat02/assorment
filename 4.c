#include <stdio.h>

int main()
{
    int arr[10][10], i, j, row, col, sum_row, sum_col;

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

    printf("\nEnter row number to find sum of elements :: ");
    scanf("%d", &sum_row);
    printf("Enter column number to find sum of elements :: ");
    scanf("%d", &sum_col);

    int sum_row_elements = 0;
    for(i=0; i<col; i++)
    {
        sum_row_elements += arr[sum_row-1][i];
    }

    int sum_col_elements = 0;
    for(i=0; i<row; i++)
    {
        sum_col_elements += arr[i][sum_col-1];
    }

    printf("\nSum of elements in row %d is :: %d", sum_row, sum_row_elements);
    printf("\nSum of elements in column %d is :: %d", sum_col, sum_col_elements);

    return 0;
}