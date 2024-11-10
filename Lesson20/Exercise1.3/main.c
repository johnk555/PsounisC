#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;

    fp = fopen("test.txt", "w");
    if (!fp)    exit(0);
    fprintf(fp, "0123456789");
    fclose(fp);


    fp = fopen("test.txt", "w+");
    printf("pos=%ld\n", ftell(fp));

    fprintf(fp, "XXXX");

    rewind(fp);

    while (!feof(fp))
        printf("%c", fgetc(fp));

    fclose(fp);

    return 0;
}
