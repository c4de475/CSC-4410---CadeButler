#include <stdio.h>

void main() {
    double Mydouble = 3.14;
    int Myint = 3;
    char Mychar = 'A';

    double* ptrDouble = &Mydouble;
    int* ptrInt = &Myint;
    char* ptrChar = &Mychar;

    printf("The value of Mydouble from the Double:\n");
    printf("Address of Mydouble: %p\n", &Mydouble);
    printf("Value of Mydouble: %.2f\n", Mydouble);
    printf("Memory Size: %zu bytes\n", sizeof(Mydouble));

    printf("The value of Myint from the Integer:\n");
    printf("Address of Myint: %p\n", &Myint);
    printf("Value of Myint: %d\n", Myint);
    printf("Memory Size: %zu bytes\n", sizeof(Myint));

    printf("The value of Mychar from the Char:\n");
    printf("Address of Mychar: %p\n", &Mychar);
    printf("Value of Mychar: %c\n", Mychar);
    printf("Memory Size: %zu bytes\n", sizeof(Mychar));

    printf("The value of Mydouble from the Double Pointer:\n");
    printf("Address of Mydouble: %p\n", ptrDouble);
    printf("Value of Mydouble: %.2f\n", *ptrDouble);
    printf("Memory Size: %zu bytes\n", sizeof(ptrDouble));

    printf("The value of Myint from the Integer Pointer:\n");
    printf("Address of Myint: %p\n", ptrInt);
    printf("Value of Myint: %d\n", *ptrInt);
    printf("Memory Size: %zu bytes\n", sizeof(ptrInt));

    printf("The value of Mychar from the Char Pointer:\n");
    printf("Address of Mychar: %p\n", ptrChar);
    printf("Value of Mychar: %c\n", *ptrChar);
    printf("Memory Size: %zu bytes\n", sizeof(ptrChar));
}