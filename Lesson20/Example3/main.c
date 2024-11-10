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

    while (1) {
        c = fgetc(fp);
        if (c == EOF)
            break;

        printf("%c", c);
    }

    /* Or
     *    while ((c=fgetc(fp))!=EOF)
     *    printf("%c",c);  */

    fclose(fp);

    return 0;
}
