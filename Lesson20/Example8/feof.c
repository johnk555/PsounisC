/* feof.c */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char c;

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(0);
    }

    while (!feof(fp)) {
        c = fgetc(fp);
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}
