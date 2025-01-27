# include <stdio.h>

void main() {
    // Write a C program to read two numbers from user and add them using pointers.

    int num1, num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int sum = *ptr1 + *ptr2;
    printf("Sum: %d\n", sum);
}