#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int minimo(int a , int b , int c)
{
    int minimo ;

    if ( a > b)
    {
        minimo = b;
    } else if ( b > c )
    {
        minimo = c ;
    } else
    {
        minimo = a ;
    }



    return minimo ;
}

float VelocidadeMin(float DeltaS , float DeltaM)
{

}

void EX2 ()
{
    int N1 , N2 , N3 ;
    printf("quero numeros inteiros\n");

    scanf("%d%d%d" , &N1 , &N2 , &N3 );
    printf("%d\n", minimo(N1,N2,N3));

}






int main()
{
    EX2();
    return 0;
}
