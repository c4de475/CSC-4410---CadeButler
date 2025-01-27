# include <stdio.h>

void main () {
    // Calculate the percentage of a user's score in relation to the maximum score in a game

    int score = 90;
    int maxScore = 100;

    double percentage = ((double) score / (double) maxScore) * 100;
    printf("Score: %d\n", score);
    printf("Max Score: %d\n", maxScore);
    printf("Percentage: %.2f%\n", percentage);
}