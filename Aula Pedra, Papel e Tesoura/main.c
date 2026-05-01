#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int jogador;
    int computador;
    int opcao;
    do {
    printf("Escolha um numero que represente qual voce vai jogar: \n");
    printf("\n=======================================\n");
    printf(" 1 - Pedra \n");
    printf(" 2 - Papel\n");
    printf(" 3 - Tesoura\n");
    scanf("%d",&jogador);

    if (jogador < 1 || jogador > 3) {
        printf("Opcao invalida my friend");
        return 0;
    }
    srand(time(NULL));
        computador = rand()% 3 + 1;
        printf("Jogador escolheu: ");
        switch(jogador) {
    case 1:
        printf(" Pedra\n");
        break;

    case 2:
        printf(" Papel\n");
        break;

    case 3:
        printf(" Tesoura\n");
        break;

        }
printf("\nComputador escolheu: ");
        switch(computador) {
    case 1:
        printf(" Pedra\n");
        break;

    case 2:
        printf(" Papel\n");
        break;

    case 3:
        printf(" Tesoura\n");
        break;

}

if (jogador == computador) {
    printf("\nEmpate");
}

else if ((jogador ==1 && computador ==3) || (jogador ==2 && computador ==1) || (jogador ==3 && computador ==2))
{
    printf("=======================================\n");
    printf("\nJogador Venceu!");
}

else {
        printf("\n=======================================\n");
    printf("\nComputador venceu!\n");
    printf("\nPERDEU!\n");
}
printf("\n");
printf("\nDeseja continuar? (S/N)");
scanf(" %c",&opcao);
system("cls");
    } while (opcao== 'S' || opcao == 's');


    return 0;
}
