#include <stdio.h>

void main() {
    int i = 10;

    while (i > -1) {
        if (i % 2 == 0) {
            printf("%d \n", i);
        }
        i--;
    }
}