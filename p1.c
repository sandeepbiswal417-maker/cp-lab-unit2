#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Array initialization
    int count;

    // Calculate the number of elements
    count = sizeof(arr) / sizeof(arr[0]);

    printf("Number of elements in the array: %d\n", count);

    // Print the array elements
    printf("Array elements are:\n");
    for(int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}