# include <stdio.h>

void convertFernToCelcius(float fernheit) {
    float celcius = (fernheit - 32) * 5 / 9;
    printf("The celcius temperature is: %.2f\n", celcius);
}

int main() {
    convertFernToCelcius(78.2);
    convertFernToCelcius(37.28);
    convertFernToCelcius(98.6);

    return 0;
}