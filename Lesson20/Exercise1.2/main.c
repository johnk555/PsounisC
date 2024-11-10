#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;

    fp = fopen("test.txt", "w");
    if (!fp)    exit(0);
    fprintf(fp, "0123456789");
    fclose(fp);


    fp = fopen("test.txt", "r+");
    printf("pos=%ld\n", ftell(fp));

    while (!feof(fp))
        printf("%c", fgetc(fp));

    printf("\npos=%ld\n", ftell(fp));


    rewind(fp);

    fprintf(fp, "XXXX\n");

    rewind(fp);

    while (!feof(fp))
        printf("%c", fgetc(fp));

    fclose(fp);

    return 0;
}
