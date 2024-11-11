#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fFrom,*fTO;

    char str[20];
    char str2[20];
    printf("Dwse to onoma toy arxeioy poy thes na antigrapso: ");
    gets(str);

    printf("Dwse to onoma toy neoy arxeioy: ");
    gets(str2);

    char text[1000];

    fFrom = fopen(str, "r");
    if(!fFrom) {
        printf("Error opening file\n");
        exit(0);
    }

    int i=0;
    while(!feof(fFrom)) {
        text[i] = fgetc(fFrom);
        i++;
    }
    fclose(fFrom);


    fTO = fopen(str2, "w+");
    fprintf(fTO, "%s\n", text);
    fclose(fTO);


    return 0;
}
