#include <stdio.h>

int main()
{
    int arr[10][10], i, j, row, col, max;

   
    printf("Enter number of rows and columns of array : ");
    scanf("%d%d", &row, &col);

    printf("\nEnter %d elements in array :: \n", row*col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    printf("\nLargest element in array is :: %d", max);

    return 0;
}