#include <stdio.h>
#include <stdlib.h>

int numero;

int main(int arc, char *argv[])

{
    printf("Sistemas\n\n");
    printf(" 1 - Windows 11 Pro\n");
    printf(" 2 - Linux Ubuntu\n");
    printf(" 3 - Windows 7 Lite\n");
    printf("\nEscolha a opcao desejada: \n");
    scanf("%d", &numero);
    switch(numero)
    {
    case 1:
        system("cls");
        printf("Iniciando o sistema Windows 11 Pro...\n");
        break;

    case 2:
        system("cls");
        printf("Iniciando o linux Ubuntu...\n");
        break;

        case 3:
        system("cls");
        printf("Iniciando o Windows 7 Lite...\n");
        break;

        default:
            printf("\nOpcao invalida, escolha uma correta\n");

        }

        system("pause");
    return 0;
}
