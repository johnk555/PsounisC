#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 80

struct person{
    char onoma[SIZE];
    char diefthinsi[SIZE];
    char arithmos[SIZE];
    char nomos[SIZE];
};

typedef struct person RECORD;

void read_record(RECORD *p);

void print_record(RECORD x);

int main()
{
    printf("Gia to atomo 1: ");
    RECORD ena;
    read_record(&ena);
    
    printf("Gia to atomo 2: ");
    RECORD dyo;
    read_record(&dyo);
    
    print_record(ena);
    print_record(dyo);
    
	return 0;
}

void read_record(RECORD *p)
{
    printf("Pliktrologise to onoma tou atomou: ");
    scanf("%s", p->onoma);
    
    printf("Pliktrologise ti diefthinsi tou atomou: ");
    scanf("%s", p->diefthinsi);
    
    printf("Pliktrologise ton arithmo tou atomou: ");
    scanf("%s", p->arithmos);
    
    printf("Pliktrologise to nomo tou atomou: ");
    scanf("%s", p->nomos);
}

void print_record(RECORD x)
{
    printf("To onoma tou atomou einai: %s\n", x.onoma );
    printf("H diefthinsi tou atomou einai: %s\n", x.diefthinsi );
    printf("O arithmos tou atomou einai: %s\n", x.arithmos );
    printf("O nomos tou atomou einai: %s\n", x.nomos );
    
}
