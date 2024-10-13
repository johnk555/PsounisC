#include <stdio.h>
#include <stdlib.h>
#include "record.h"
#define SIZE 80


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
    printf("%s : %s %s %s\n", x.onoma, x.diefthinsi, x.arithmos, x.nomos);

}

void init_record(RECORD *p)
{
    p->onoma = malloc(sizeof(char)*SIZE);
    if(!p->onoma)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }

    p->diefthinsi = malloc(sizeof(char)*SIZE);
    if(!p->diefthinsi)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }

    p->arithmos = malloc(sizeof(char)*SIZE);
    if(!p->arithmos)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }

    p->nomos = malloc(sizeof(char)*SIZE);
    if(!p->nomos)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }

}

void free_record(RECORD x)
{
    free(x.onoma);
    free(x.diefthinsi);
    free(x.arithmos);
    free(x.nomos);
}

void copy_record(RECORD *A,RECORD *x)
{
    x->onoma=A->onoma;
    x->diefthinsi=A->diefthinsi;
    x->arithmos=A->arithmos;
    x->nomos=A->nomos;

}
