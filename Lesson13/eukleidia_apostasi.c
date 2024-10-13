#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct point {
	float x;
	float y;
};

void read_point(struct point *p);

float eukleidia(struct point A , struct point B);

int main()
{
    struct point A,B;
    
    printf("1o simeio: \n");
    read_point(&A);
    printf("2o simeio: \n");
    read_point(&B);
    
    printf("H eukleidia apostasi einai: %.3f", eukleidia(A,B));
    
	return 0;
}

void read_point(struct point *p)
{
    printf("Dwse tin x syntetagmeni: ");
    scanf("%f",   &(p->x)   );
    
    printf("Dwse tin y syntetagmeni: ");
    scanf("%f",   &(p->y)   );
}

float eukleidia(struct point A , struct point B)
{
    return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
