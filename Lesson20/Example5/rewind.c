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

    for (i = 0; i < 5; i++)
        printf("%c", fgetc(fp));

    printf("\n");

    rewind(fp);

    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);

    return 0;
}
