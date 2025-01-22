# include <stdio.h>

void area(int length, int width) {
    int area = length * width;
    printf("The area is: %d\n", area);
}

int main() {
    area(3, 27);
    area(7, 1000);
    area(15, 4);

    return 0;
}