#include <stdio.h>
#define SIZE 1000

int mystrlen(char *s);

int main(){
  char str[SIZE];

printf("Give string: ");
gets(str);

printf("Length of string is: %d", mystrlen(s));
}

int mystrlen(char *s)
{
  int cnt = 0;

  while(s[cnt] != '\0')
  {
    cnt++;
  }

  return cnt;
}
