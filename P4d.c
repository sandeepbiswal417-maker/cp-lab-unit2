C Program for Nested if: positivity of two numbers

 #include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > 0) {  
        if (b > 0) {  
            printf("Both numbers are positive.\n");
        } else {
            printf("First number is positive, but second is not.\n");
        }
    } else {
        if (b > 0) {
            printf("First number is not positive, but second is.\n");
        } else {
            printf("Both numbers are not positive.\n");
        }
    }

    return 0;
}
