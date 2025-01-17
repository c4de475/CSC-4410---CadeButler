#include <stdio.h>

void main() {
    int i = 10;

    while (i > 0) {
        printf("%d \n", i);
        if (i == 1) {
            printf("Happy New Year!!! \n");
        }
        i--;
    }
}