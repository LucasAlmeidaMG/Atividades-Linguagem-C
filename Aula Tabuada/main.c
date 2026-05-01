#include <stdio.h>
#include <stdlib.h>

/* aula tabuada */

int numero,resposta;
int contador=0;

int main()
{

    do
    {


    printf("Tabuada do Lucao\n");
    printf("\nDigite o numero que deseja calcular: ");
    scanf("%d",&numero);
    // a linha abaixo gera um laço finito.
    for(contador=0;contador<=10;contador++)
    {
        printf("\n%d x %d = %d",numero,contador,numero*contador);
    }
    printf("\n");
    printf("\n1 - Novo Calculo\n");
    printf("\n2 - Sair\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d",&resposta);
    system("cls");

   }while(resposta != 2);
system("pause");
    return 0;

}
