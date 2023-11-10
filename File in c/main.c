#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char c;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("File not found.\\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}