# include <stdio.h>

struct House {
    char address[100];
    float squareRoot;
    int bedrooms;
    int bathrooms;
    float price;
};

int main() {
    struct House house1 = {"123 Main St", 1000.0, 3, 2, 500000.0};
    struct House house2 = {"456 Park Ave", 2000.0, 4, 3, 800000.0};
    struct House house3 = {"789 Oak St", 1500.0, 2, 1, 400000.0};

    printf("Address: %s\n", house1.address);
    printf("Square Root: %.2f\n", house1.squareRoot);
    printf("Bedrooms: %d\n", house1.bedrooms);
    printf("Bathrooms: %d\n", house1.bathrooms);
    printf("Price: %.2f\n", house1.price);
    printf("\n");
    printf("Address: %s\n", house2.address);
    printf("Square Root: %.2f\n", house2.squareRoot);
    printf("Bedrooms: %d\n", house2.bedrooms);
    printf("Bathrooms: %d\n", house2.bathrooms);
    printf("Price: %.2f\n", house2.price);
    printf("\n");
    printf("Address: %s\n", house3.address);
    printf("Square Root: %.2f\n", house3.squareRoot);
    printf("Bedrooms: %d\n", house3.bedrooms);
    printf("Bathrooms: %d\n", house3.bathrooms);
    printf("Price: %.2f\n", house3.price);

    return 0;
}