#include <stdio.h>
#include <string.h>
#define N 80
int main() {

    char str1[N], str2[N];
    int l=15;

    /* eisodos */
    printf("Dwse ti sumboloseira: ");
    gets(str1);

    /* antigrafi me tin strncpy */
    strncpy(str2, str1,l);

    /* eksodos */
    printf("str1=%s, str2=%s", str1, str2);
}
