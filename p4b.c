#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = arr; // Pointer points to the first element of the array

    printf("Accessing array elements using pointers:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i+1, *(ptr + i));
        // You can also write: printf("Element %d: %d\n", i+1, arr[i]);
    }

    return 0;
}