# include <stdio.h>

void main() {
    int myNumbers[4] = {25, 50, 75, 100};

    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        printf("This is the %d value: %d\n", i, myNumbers[i]);
        printf("This is the %d value memory address: %p\n", i, &myNumbers[i]);
    }

}