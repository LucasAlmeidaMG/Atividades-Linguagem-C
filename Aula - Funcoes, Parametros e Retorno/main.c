#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula funcoes calculadora */


float somar(float num1, float num2){
    return num1 + num2;
}

float subtrair(float num1, float num2){
    return num1 - num2;
}

float multiplicar(float num1, float num2){
    return num1 * num2;
}

float dividir(float num1, float num2){
    return num1 / num2;
}

float calcularporcentagem(float num1, float num2){
    return (num1 * num2) /100;
}

int main(){
setlocale(LC_ALL,"Portuguese");
int opcao;
float num1,num2,resultado;
printf("Calculadora\n");
printf("-------------------------------\n");
printf("Digite o valor do primeiro numero: ");
scanf("%f",&num1);
printf("Digite o valor do segundo numero: ");
scanf("%f",&num2);
printf("-------------------------------\n");
printf("1. Somar\n");
printf("2. Subtrair\n");
printf("3. Multiplicar\n");
printf("4. Dividir\n");
printf("5. Calcular a porcentagem\n");
printf("\n");
printf("Digite a opção desejada: ");
scanf("%d",&opcao);
switch(opcao)
{
case 1:
    resultado = somar(num1,num2);
    break;

    case 2:
    resultado = subtrair(num1,num2);
    break;

    case 3:
    resultado = multiplicar(num1,num2);
    break;

    case 4:
        if (num2 == 0){
            printf("Não é possível dividir por 0");
        }
        else {
            resultado = dividir(num1,num2);
        }
    break;

    case 5:
    resultado = calcularporcentagem(num1,num2);
    break;
    default:
        printf("Opção inválida meu nobre.");
        break;
}

printf("\n-------------------------------\n");
printf("Resultado %.2f\n",resultado);
printf("\n");






system("pause");
return 0;
}
