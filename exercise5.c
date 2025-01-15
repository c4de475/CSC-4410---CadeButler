#include <stdio.h>

void main(){
    // Exercise 2
    int num;
    printf("Please enter a number: \n");
    scanf("%d", &num);

    if (num > 0){
        printf("The number entered is greater than 0 \n");
    }
    else if (num < 0){
        printf("The number entered is less than 0 \n");
    }
    else{
        printf("The number entered is 0 \n");
    }

    if (num % 2 == 0){
        printf("The number entered is even \n");
    }
    else{
        printf("The number entered is odd \n");
    }
}