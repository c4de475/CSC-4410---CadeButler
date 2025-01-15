#include <stdio.h>

void main(){
    float temp;
    printf("Please enter a temperature: \n");
    scanf("%f", &temp);

    printf("The temperature entered is greater than 70 degrees or less than 85 fahrenheit (1 being true, 0 being false): %d\n", temp > 70 && temp < 85);
}