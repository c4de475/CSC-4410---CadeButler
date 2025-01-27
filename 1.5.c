# include <stdio.h>

void main(){
    // Write a C program that ask user for temperature and output 1 if temperature > 70F and < 85F, otherwise output 0

    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);
    if (temp > 70 && temp < 85){
        printf("1 \n");
    } else {
        printf("0 \n");
    }
}