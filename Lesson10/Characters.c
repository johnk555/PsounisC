#include <stdio.h>
#define SIZE 1000

char *mystrcpy(char *dest, char *src);

int main()
{
    char str1[SIZE], str2[SIZE], str3[SIZE];
    
    int choice;
    
    printf("Dwste ti 1i symboloseira: ");
    gets(str1);
    
    printf("Dwste ti 2i symboloseira: ");
    gets(str2);
    printf("Poies apo tis dyo symvoloseires thes na antigrapseis?");
    scanf("%d", &choice);
    
    if (choice==1)
        mystrcpy(str3,str1);
    else if (choice==2)
        mystrcpy(str3,str2);
    
    printf("\n\n1: %s\n2: %s\n3: %s", str1,str2,str3);
    
    return 0;
}

char *mystrcpy(char *dest, char *src)
{
    int cnt=0;
    
    while(1)
    {
        dest[cnt] = src[cnt];
        if (src[cnt] == '\0')
            break;
        cnt++;
    }
    
    return dest;
}
