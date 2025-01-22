# include <stdio.h>

void convertFernToCelcius(float fernheit) {
    float celcius = (fernheit - 32) * 5 / 9;
    printf("The celcius temperature is: %.2f\n", celcius);
}

int main() {
    float fernheit;
    printf("Please enter a temperature in fahrenheit:\n");
    scanf("%f", &fernheit);
    convertFernToCelcius(fernheit);

    return 0;
}
