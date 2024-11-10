/* ftell.c */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char c;
    int i;

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(0);
    }

    printf("\npos: %d\n", ftell(fp));

    for (i = 0; i < 5; i++)
        printf("%c", fgetc(fp));

    printf("\npos: %d\n", ftell(fp));

    rewind(fp);

    printf("\npos: %d\n", ftell(fp));

    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    printf("\npos: %d\n", ftell(fp));

    fclose(fp);

    return 0;
}

