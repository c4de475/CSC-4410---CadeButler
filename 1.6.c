# include <stdio.h>

void main(){
    // Create a C program to determine if a number entered by user is negative, positive, or zero

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0){
        printf("Positive \n");
    } else if (num < 0){
        printf("Negative \n");
    } else {
        printf("Zero \n");
    }
}