# include <stdio.h>

void main(){
    // Create a C program to determine if a number entered by user is odd or even

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("Even \n");
    } else {
        printf("Odd \n");
    }
}