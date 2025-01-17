#include <stdio.h>

void main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    float sum = 0;

    for (int i = 0; i < length; i++) {
        sum += ages[i];
    }
    printf("The average age is: %.2f\n", sum / length);
}