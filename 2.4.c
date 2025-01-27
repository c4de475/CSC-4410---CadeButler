# include <stdio.h>

void main() {
    // Write a program that prints the multiplication table using nested loop

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d * %d = %d ", i, j, i * j);
        }
        // Table Format
        printf("\n");
    }
}