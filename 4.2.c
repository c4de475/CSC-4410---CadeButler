# include <stdio.h>

void main () {
    // Read the file hello.txt and print out the content

    FILE* fp;
    fp = fopen("hello.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);
}