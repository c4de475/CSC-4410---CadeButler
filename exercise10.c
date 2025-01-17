#include <stdio.h>

void main() {
    int i, x;

    for (i = 1; i <= 10; i++) {
        for (x = 1; x <= 10; x++) {
            printf("%d x %d = %d\t", i, x, i * x);
        }
        printf("\n");
    }
}