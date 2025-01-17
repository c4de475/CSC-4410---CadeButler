#include <stdio.h>

void main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int lowestNum = 0;


    for (int i = 0; i < length; i++) {
        if (lowestNum == 0) {
            lowestNum = ages[i];
        } else if (ages[i] < lowestNum) {
            lowestNum = ages[i];
        }
    }
    printf("The lowest age is: %d\n", lowestNum);
}