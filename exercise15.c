#include <stdio.h>

void main() {
    int num1, num2, sum;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &sum;

    printf("Please enter a number:\n");
    scanf("%d", ptr1);
    printf("Please enter another number:\n");
    scanf("%d", ptr2);

    *ptr3 = *ptr1 + *ptr2;

    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, *ptr3);
}