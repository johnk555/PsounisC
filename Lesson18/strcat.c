#include <stdio.h>
#include <string.h>
#define N 100
int main() {

    char str1[N], str2[N];

    /* eisodos */
    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);

    /* antigrafi me tin strcat */
    strcat(str1, str2);
    printf("\nstr1=%s", str1);
    strcat(str1, str2);
    printf("\nstr1=%s", str1);
}
