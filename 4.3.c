# include <stdio.h>
# include <string.h>

int main() {
    FILE *fp;

    char dataToBeWritten[50] = "GeeksForGeeks-A Computer" "Science Portal for Geeks";

    fp = fopen("GfgTest.c", "w");

    if (fp == NULL) {
        printf("Unable to open file\n");
    } else {
        printf("File opened successfully\n");

        if (strlen(dataToBeWritten) > 0) {
            // dataToBeWritten can be written to the file
            fprintf(fp, "%s", dataToBeWritten);
            printf("Data written successfully\n");

            fputs(dataToBeWritten, fp);
            printf("Data written successfully\n");

            fwrite(dataToBeWritten, sizeof(char), strlen(dataToBeWritten), fp);
            printf("Data written successfully\n");
        } else {
            printf("Data to be written is empty\n");
        }
    }
    return 0;
}