# include <stdio.h>

void main () {
    // Write a short C program that declares and initializes (to any value you like) a double, an int, and a char. Next declare and initialize a pointer to each of the three variables. Your program should then print the address of, and value stored in, and the memory size (in bytes) of each of the six variables.

    double d = 3.14;
    int i = 10;
    char c = 'a';

    double *pd = &d;
    int *pi = &i;
    char *pc = &c;

    printf("Address of d: %p\n", pd);
    printf("Value of d: %f\n", *pd);
    printf("Size of d: %d\n", sizeof(d));

    printf("Address of i: %p\n", pi);
    printf("Value of i: %d\n", *pi);
    printf("Size of i: %d\n", sizeof(i));

    printf("Address of c: %p\n", pc);
    printf("Value of c: %c\n", *pc);
    printf("Size of c: %d\n", sizeof(c));

    printf("Address of pd: %p\n", &pd);
    printf("Value of pd: %p\n", pd);
    printf("Size of pd: %d\n", sizeof(pd));

    printf("Address of pi: %p\n", &pi);
    printf("Value of pi: %p\n", pi);
    printf("Size of pi: %d\n", sizeof(pi));

    printf("Address of pc: %p\n", &pc);
    printf("Value of pc: %p\n", pc);
    printf("Size of pc: %d\n", sizeof(pc));
}