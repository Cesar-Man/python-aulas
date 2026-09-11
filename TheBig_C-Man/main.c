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
int contador = 1 ;
printf("qual tabuada tu quer ") ;
scanf("%d" , &tabuuada);


for (int i = 1 ; i <= 10 ; i++){
    tabuuada * contador ;
    contador++ ;
    printf("%d\n" , tabuuada * i);
}


}


void _switch(){

int contaA = 0 , contaB = 0 , contaC = 0 , contaD = 0 , contaF = 0 ;
char conceito ;

printf("quero o proximo conceito(ctrl-z - EOF - Pra terminar)");

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

void somaNum (){

int numero ;
int conta = 0 ;
printf("quero um numero inteiro\n");
scanf("%d",&numero);

for (int i = 0 ; i < 10 ; i++){
    conta = conta + numero ;
    printf("quero um numero inteiro\n");
    scanf("%d",&numero);


}
printf("%d\n " , conta);
}


void parIm(){

int conta  , par , impar;
printf("fale numeros e direi quantos sao par ou impar\n");
scanf("%d", &conta);

while (conta != -1){

    if (conta % 2 == 0){
        par ++ ;
        scanf("%d", &conta);
    } else{
        impar ++ ;
        scanf("%d", &conta);
    }

}

printf("par %d\n" , par);
printf("impar %d\n" , impar);
}


// AULA de FUNCOES
int quadrado (int y);
void qDURADO(){
    int x ;
    for (int i = 1 ; i<=10 ; i++){
        printf("%d " , quadrado(x));
    }
    printf("\n");
}

//--------------------------
int maior (int a , int b , int c){

    int BIGGER = a ;

    if( b > BIGGER){
        BIGGER = b ;
    }
    if (c > BIGGER){
        BIGGER = c ;

    }
    return BIGGER ;
}
void maiorPorta(){

    int NUM1 , NUM2 , NUM3;
    printf("quero trex numeros ");
    scanf("%d%d%d", &NUM1 , NUM2 , NUM3);
    printf("%d is the  maoir \n" , maior(NUM1 , NUM2 , NUM3));


}
//-------------------------------------

int primo(int num){
    int saida = 1;

    for (int i = 2 ; i < num ;  i++){
        if (num % i == 0 ){

            saida = 0;
        }

    }

    return saida ;
}

void primoPorta(){
    int n ;
    printf("quero um numepr inteiro\n");
    scanf("%d" , &n );

    if(primo(n)){
        printf("plimo\n");
    } else {
        printf("nao e plimo\n");

    }


}

int main()
{
    int id ;
    printf("id de 1 ate numeros \n");
    scanf ("%d", &id);

    switch(id){
case 1 :
    {
        Contador_nota();
        break;
    }// ---------------------------------
case 2 :
    {
      _for_Tabuada();
      break;
    }// ---------------------------------
case 3 :
    {
        _switch();
        break;
    }// ---------------------------------
case 4:
    {
        somaNum();
        break;
    }// ---------------------------------
case 5 :
    {
        parIm();
        break;
    }// ---------------------------------
case 6 :
    {
        qDURADO();
        break;
    }

case 7:
    {
        maiorPorta();
        break;
    }

case 8:
    {
        primoPorta();
        break;
    }
default:
    printf("CABO");
    break;

    } // ---------------------------------


    return 0;
} // MAIN FUNCCCCCCCCCTION




int quadrado(int y ){

    return y * y ;
}
