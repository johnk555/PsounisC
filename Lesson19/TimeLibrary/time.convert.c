#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t;
    struct tm *now;
    t=time(0);

    now=localtime(&t);
    printf("%d:%d:%d",now->tm_hour,now->tm_min,now->tm_sec);



    return 0;
}
