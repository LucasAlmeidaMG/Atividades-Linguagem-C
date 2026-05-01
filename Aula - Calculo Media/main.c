#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float nota1,nota2,media;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;
    printf("\nA media das notas e: %.2f\n",media);
    if (media<6)
    {
        printf("\nAluno esta reprovado\n");
    }
    else
    {
        printf("\nAluno esta aprovado\n");
    }
    system("pause");
    return 0;
}
