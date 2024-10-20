#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80

int main() {
  char str[N];
  char *str2;

  /* eisodos */
  printf("Dwse ti sumboloseira: ");
  gets(str);

  /* antigrafi me tin strdup */
  str2 = strdup(str);

  /* eksodos */
  if (!str2)
    printf("Adynamia desmeusis mnimis!");
  else
    printf("Antigrafike: %s me mikos: %d", str2, strlen(str2));

  return 0;

}
