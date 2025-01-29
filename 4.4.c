# include <stdio.h>
# include <string.h>

int main() {
    FILE *fp;

    char dataToBeRead[50];


    // Open the file in read mode
    fp = fopen("GfgTest.c", "r");

    if (fp == NULL) {
        printf("Unable to open file\n");
    } else {
        printf("File opened successfully\n");
        
        // Read the data from the file
        fread(dataToBeRead, sizeof(char), 50, fp);

        // Print the data read from the file
        printf("Data read from the file: %s\n", dataToBeRead);

        printf("Data read successfully\n");

        // Close the file
        fclose(fp);
    }
    return 0;
}