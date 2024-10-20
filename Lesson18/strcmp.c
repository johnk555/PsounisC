#include <stdio.h>
#include <string.h>
#define N 80
int main() {
  int res;

  char str1[N], str2[N];

  /* eisodos */
  printf("Dwse ti sumboloseira 1:");
  gets(str1);
  printf("Dwse ti sumboloseira 2:");
  gets(str2);

  /* sygkrisi me tin strcmp */
  res=strcmp(str1, str2);
  if(res<0)
    printf("str1 < str2 (res=%d)", res);
  else if(res==0)
    printf("str1 == str2 (res=%d)", res);
  else
    printf("str1 > str2 (res=%d)", res);
}
