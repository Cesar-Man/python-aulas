#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void Ex1()
{
int v1; // valor 1
int v2; // valor 2
int soma;
int subtracao;
int mult;
int divi;
int sobra ;

printf("me de um numero inteiro\n");
scanf("%d" , &v1);
printf("me de outro numero inteiro\n");
scanf("%d" , &v2);

soma = v1 + v2 ;
subtracao = v1 - v2 ;
mult = v1 * v2 ;
divi = v1 / v2 ;
sobra = v1 % v2 ;

printf("a soma de %d com %d e %d\n" , v1 , v2 , soma) ;
printf("a subtração de %d com %d e %d\n" , v1 , v2 , subtracao) ;
printf("a multiplicação de %d com %d e %d\n" , v1 , v2 , mult) ;
printf("a divisão de %d com %d e %d\n" , v1 , v2 , divi) ;
printf("a sobra de %d com %d e %d\n" , v1 , v2 , sobra) ;


} //--------------------------------

void EX2()
{

   int Inteiro ;
   int aritimetica ;

   printf("Me de um numero inteiro, direi se ele é par ou impar\n");
   scanf("%d" , &Inteiro) ;

   aritimetica = Inteiro % 2 ;
   if(aritimetica == 0)
   {
        printf("o numero %d é par, visto que seu resto é %d\n ", Inteiro , aritimetica);

   } else
   {
       printf("o numero %d é impar, visto que seu resto é %d\n ", Inteiro, aritimetica);
   }



}

void EX3()
{
    float numero ;
    float conta ;

    printf("me de um numero de ponto float e mostrarei o dobro \n ");
    scanf("%f", &numero);
    conta = numero * 2.0 ;

    printf("o dobro de %.2f é %.2f\n ", numero, conta);
}

void EX4()
{
    float numero , aritmetica , resultado;
    printf("me de um numero para calcular um acrescimo de DEZ porcento\n");
    scanf("%f" , &numero);

    aritmetica = (numero * 10 ) / 100 ;
    resultado = numero + aritmetica;
    printf("o resuldado do acrecismo foi de %.2f\n " , resultado);

}

void EX5()
{
    float NP1 , NP2 , PIM , Media ;

    printf("Nota da NP1\n");
    scanf("%f", &NP1);
    printf("Nota da NP2\n");
    scanf("%f" , &NP2);
    printf("Nota do PIM\n");
    scanf("%f", &PIM);

    Media = (4 * NP1 + 4 * NP2 + 2 * PIM) / 10 ;

    if (Media >= 7)
    {
        printf("Aprovado com uma media de %.2f\n" , Media);

    } else
    {
        printf("REPROVADO com uma media de %.2f\n" , Media);
    }
}

void EX6()
{
    float numero , ariti;

    printf("um numero flutuante e direi sua raiz \n");
    scanf("%f", &numero);

    ariti = sqrt(numero);

    printf("a raiz de %.2f é %.2f\n",numero , ariti);
}

void EX7()
{
    float a , b , c ,Delta , X , x2;
    printf(" valor de A\n");
    scanf("%f" , &a);
    printf(" Valor de B\n");
    scanf("%f" , &b);
    printf(" Valor de C\n");
    scanf("%f" , &c);

    Delta = (b*b) - (4 * a * c);
    X = (-b + sqrt(Delta)) / (2 * a);
    x2 = (-b - sqrt(Delta)) / (2 * a);

    printf(" o resultado é %.2f e %.2f\n" , X , x2);
}

int main()
{
    setlocale(LC_ALL, "") ;


    // Ex1();
    // EX2();
    // EX3();
    // EX4();
    // EX5();
    // EX6();
       EX7();
    return 0;
} // Main --------------------------
