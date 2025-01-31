#include <stdio.h>
#include <stdlib.h>

int main() {
    int numStudents = 0;
    printf("Enter number of students: ");
    scanf("%d", &numStudents);
    
    // Allocate memory for scores
    int *scores = malloc(numStudents * sizeof(int));
    if (scores == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input scores
    for (int i = 0; i < numStudents; i++) {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Open file and wrie scores to file in reverse order
    FILE *fp = fopen("scores.txt", "w");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        free(scores);
        return 1;
    }

    for (int i = numStudents - 1; i >= 0; i--) {
        fprintf(fp, "%d\n", scores[i]);
    }

    // Free memory
    free(scores);

    // Close file
    fclose(fp);

    return 0;
}