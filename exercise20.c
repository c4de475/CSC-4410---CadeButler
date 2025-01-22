# include <stdio.h>

void areaCircle (float radius) {
    float area = 3.14 * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
}

int main() {
    float radius;
    printf("Please enter a radius:\n");
    scanf("%f", &radius);

    areaCircle(radius);
}