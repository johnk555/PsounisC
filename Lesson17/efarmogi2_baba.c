#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Onoma, Eponimo, Ilikia, Ipsos */

int lexarithmos(char *s);
int mystrlen(char *s);
void print_func(int sum);

int main(int argc,char *argv[] ) {

    int sum=0;

    int onoma = lexarithmos(argv[1]);
    int eponimo = lexarithmos(argv[2]);
    int ilikia = atoi(argv[3])*10;
    int ipsos = (int)100*atof(argv[4]);

    sum=onoma+eponimo+ilikia+ipsos;

    printf("%d + %d + %d + %d = %d\n",onoma,eponimo,ilikia,ipsos,sum);

    if(sum<=1000)
        print_func(sum);
    else if(sum>1000) {
        printf("H mpampa leei: Dwse alla 100$\n");
        srand(time(NULL));
        int random = rand()%1000 +1;
        print_func(random);
    }


    return 0;
}

int lexarithmos(char *s) {
    int sum = 0;
    int i;
    for(i=0; i<=mystrlen(s); i++) {
        for(int j=97;j<=128;j++) {
            if(s[i] == j)
                sum=sum+(j-96);


        }
    }
    return sum;


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

void print_func(int sum) {
    if(sum>=1 && sum<=300)
        printf("H mpampa leei: Seismos kai kataponismos\n");
    else if(sum>300 && sum<=600)
        printf("H mpampa leei: Limos kai polemos\n");
    else if(sum>600 && sum<=1000)
        printf("H mpampa leei: Arrwstia kai Kasida\n");
}

