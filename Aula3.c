#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void Contador_nota()
{
int contador , nota , total , media ;

total = 0 ;
contador = 1 ;

while (contador <= 10)
{
    printf(" fale a nota ");
    scanf("%d" , &nota);
    total = total + nota ;
    contador = contador + 1 ;

    }//-------------------------------
media = total / 10 ;

printf(" a media e %d\n" , media);


}



void A3_EX1_voto()
{
int idade ;

printf("insira a idade");




} //-------------------------------
// || = or , && = and
void _for_Tabuada (){

int tabuuada ;

printf("qual tabuada tu quer ") ;
scanf("%d" , &tabuuada);


for (int i = 1 ; i <= 10 ; i++){
    tabuuada * i ;
    printf("%d\n" , tabuuada * i);
}


}


void _switch(){

int contaA = 0 , contaB = 0 , contaC = 0 , contaD = 0 , contaF = 0 ;
char conceito ;

printf("quero o proximo conceito(ctrlz - EOF - Pra terminar)");

while((conceito = getchar()) != EOF)
{

    switch(conceito)
    {
case 'A':
case 'a':
    contaA++;
    break;
case'B':
case'b':
    contaB++;
    break;
case 'C':
case 'c':
    contaC++;
    break;
case 'D':
case 'd':
    contaD++;
    break;
case 'F':
case 'f':
    contaF++ ;
    break;
case '\n':
case '\t':
case ' ':
    break;
default:
    printf("isso ae e um conceito invalido mermamo");
    break ;

    } // swicht------------------
    printf("quero o proximo conceito(ctrlz - EOF - Pra terminar)");

    }//while ------------------------------------------
printf("Conceita A : %d \n" , contaA);
printf("Conceita B : %d \n" , contaB);
printf("Conceita C : %d \n" , contaC);
printf("Conceita D : %d \n" , contaD);
printf("Conceita F : %d \n" , contaF);
} // VOID --------------------------------




int main()
{
    //Contador_nota();
    //_for_Tabuada();
    _switch();
    return 0;
}
