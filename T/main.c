#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//PONTEIROSSSSSSSSS
void Limpar_Terminal() {
    printf ("\033c\n");
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int CuboPorValor(int n)
{
    return n * n * n ;
}

void CuboPorPonteiro(int* n)
{

    *n = *n * *n * *n ;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

/*void imprimaVerticalmente(char *p)
{
    while (*p != '\0')
    {
        printf("%c\n" , *p++);
        p++ ;
    }
}

void imprimaInvertido(char *p)
{
    int i = 0 ;
    while (*p != '\0')
    {
        i++;
        p++;
    }

    for (;i > 0 ; i--)
    {
        p--;
        printf("%c" , *p);
    }
    printf("\n");
}*/

int dadoDOLABELA( ){
     int dado = rand() % 6 + 1;
    return dado;
}


int main()
{
   // int n = 5;//int *yPonteiro = &y;
   // printf("o vavor , %d ao cubo vale %d \n" , n , CuboPorValor(n));
   // CuboPorPonteiro(&n);
   // printf("Por Ponteiro , o cubo vale %d\n" , n);

    //char palavra[15];
   // printf("Digite uma palavra de ate 14");
    //scanf("%14s" ,  palavra);
    //imprimaVerticalmente(palavra);
    //imprimaInvertido(palavra);
    int n = 10000, i , dados;
    int cont[11] = {0};
    for (i = 0 ; i < n ; i++) {

        dados = dadoDOLABELA() + dadoDOLABELA();
        cont[dados -2 ]++;

    }
    for (i = 0 ; i < 11 ; i +=) {
        printf("o valor %d saiu %d " , i , cont[i]);
    }
    return 0;
}

