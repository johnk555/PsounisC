#include <stdio.h>
#include <string.h>
#define N 80

int main() {
    char str1[N], str2[N];
    char *ptr;
    int i,length;

    /* eisodos */
    printf("Dwse ti 1i sumboloseira: ");
    gets(str1);
    printf("Dwse ti 2i sumboloseira: ");
    gets(str2);

    /* anazitisi me tin strspn */
    length = strspn(str1,str2);

    if (length>0) {
        printf("Oi prwtoi %d xaraktires tis str1 periexontai stin str2:",length);
        for(i=0;i<length;i++)
            printf("%c", str1[i]);
    }
    else
        printf("Oi sumboloseires den tairiazoun");

    return 0;
}

