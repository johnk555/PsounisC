#include <stdio.h>
#include <string.h>

#define N 80

int main() {

    char str1[N], str2[N];

    /* eisodos */
    printf("Enter a string: ");
    gets(str1);

    /* antigrafi tis 1 sti 2 */
    strcpy(str2, str1);

    /* eksodos */
    printf("str1=%s, str2=%s",str1,str2);
    return 0;
}
