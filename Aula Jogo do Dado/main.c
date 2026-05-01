#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// jogo do dado

int main()
{
    printf("Jogo do Dado\n");
    srand(time(NULL));
    printf("Face: %d\n",rand()%6 + 1);
    system("pause");
    return 0;
}
