#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//----------------------------------------------------------------------------------
int FatorialIteraritivo(int n )
{
    int fatorial = 1 ;
    for (int i = n ; i > 1 ; i--  )
    {
        fatorial *= i;
    }
    return fatorial ;
}

int FatorialRecusso(int n)
{
    int fat = 1;

    if(n > 1 )
    {
        fat =  n * FatorialRecusso(n - 1);
    }

    return fat ;
}

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
void ExemploFatorial()
{

    int n ;
    printf("eu quero um interio");
    scanf ("%d" , &n);
    printf("%d esse e iterativo\n", FatorialIteraritivo(n));
    printf("%d esse e recurssivo", FatorialRecusso(n));

}

//---------------------------------------------------------------

int Fibbo (int n )
{
    int fib = 1 ;


    if (n > 2 )
    {
        int ultimo = 1 ;
        int penultimo = 1;
        for (int i = 3 ; i <= n ; i++)
        {
            fib = ultimo + penultimo;
            penultimo = ultimo ;
            ultimo = fib ;

        }
    }

    return fib ;
}



int FibboRecu(int n)
{
    int fib = 1 ;

    if(n >= 3 )
    {
        fib = FibboRecu(n - 1 ) + FibboRecu( n - 2 );
    }


    return fib ;
}



void El_Fibbo()
{
    int n ;
    printf("quantos elementos de fibbo tu quer\n ");
    scanf("%d", &n);
    printf("algoritmo iterativo\n");
    for (int i = 1 ; i <= n ; i++)
    {
        printf("%d ", Fibbo(i));
    }
    printf("Recurssivo\n");
    for (int a = 1 ; a <= n ; a++)
    {
         printf("%d ", FibboRecu(a));
    }
    printf("\n");
}


int main()
{
    //ExemploFatorial();
    El_Fibbo();
    return 0;
}
