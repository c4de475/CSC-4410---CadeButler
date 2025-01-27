# include <stdio.h>

void tempConvert(float temp) {
    float c = (temp - 32) * (5.0/9.0);
    printf("Temperature in C: %.2f\n", c);
}

void areaSqaure(float width, float height) {
    float area = width * height;
    printf("Area: %.2f\n", area);
}

void areaCircle(float radius) {
    float area = 3.14 * radius * radius;
    printf("Area: %.2f\n", area);
}

void main() {
    // Write function to convert temperature in F to C
    float temp;
    printf("Enter temperature in F: ");
    scanf("%f", &temp);
    tempConvert(temp);

    // Write function to calculate area from width and height
    float width, height;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
    areaSqaure(width, height);

    // Write function to calculate area from radius
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    areaCircle(radius);
}