# include <stdio.h>

void main() {
    // Find the lowest age among the ages in an array

    int ages[] = {71, 20, 18, 40, 1};

    int minAge = ages[0];
    for (int i = 1; i < 5; i++) {
        if (ages[i] < minAge) {
            minAge = ages[i];
        }
    }
    printf("Lowest age: %d\n", minAge);
}