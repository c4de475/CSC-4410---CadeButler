# include <stdio.h>

void main() {
    // Calculate the average of different ages from an array

    int ages[] = {10, 20, 30, 40, 50};
    int sum = 0;
    int count = 0;

    for (int i = 0; i < 5; i++) {
        sum += ages[i];
        count++;
    }

    double average = (double) sum / (double) count;
    printf("Average age: %.2f\n", average);
}