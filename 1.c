#include <stdio.h>

void Negative(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 20 , -43, -44, -2, 50, -21, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Negative elements are: ");
    Negative(arr, size);

    return 0;
}