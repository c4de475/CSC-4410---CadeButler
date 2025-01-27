# include <stdio.h>

void main() {
    // Using pointer, print the second element of the array

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[1];
    printf("Second element: %d\n", *ptr);
}