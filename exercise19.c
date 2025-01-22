# include <stdio.h>

void area(int length, int width) {
    int area = length * width;
    printf("The area is: %d\n", area);
}

int main() {
    int length;
    int width;

    printf("Please enter a length:\n");
    scanf("%d", &length);
    printf("Please enter a width:\n");
    scanf("%d", &width);

    area(length, width);
    return 0;
}
