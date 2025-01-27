# include <stdio.h>

void main() {
    // Using for loop and pointer, print all element, each element on a line

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    for (int i = 0; i < 5; i++) {
        printf("%d \n", *(ptr + i));
    }
}