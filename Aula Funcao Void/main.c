#include <stdio.h>
#include <stdlib.h>
 /* aula funcao */
void teste(void);
void funcao(void);
int main()
{

    teste();
    printf("Exemplo de funcao\n\n");
    funcao();
    return 0;
}

void teste(void)
{
    printf("Dev Senior Lucas Almeida\n");
}

void funcao(void)
{
    printf("\nEssa e a ultima funcao chamada por voce");
    printf("\nFIM");
}
