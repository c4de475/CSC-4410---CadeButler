# include <stdio.h>

void main () {
    float item = 9.99;
    int totalItems = 50;
    float total = 0;

    for (int i = 0; i < totalItems; i++) {
        total += item;
    }

    printf("Total Items: %d\n", totalItems);
    printf("Item: $%.2f\n", item);
    printf("Total: %.2f\n", total);
}