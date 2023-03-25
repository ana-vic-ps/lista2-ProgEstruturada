#include <stdio.h>

/*Questão 1 - Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence,
considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte*/

int main()
{

    int ddd;

    printf("Digite o DDD: ");
    scanf("%i", &ddd);

    switch (ddd)
    {
    case (61):
        printf("\nO DDD percente a Brasília.");
        break;

    case (71):
        printf("\nO DDD percente a Salvador.");
        break;

    case (11):
        printf("\nO DDD percente a São Paulo.");
        break;

    case (21):
        printf("\nO DDD percente ao Rio de Janeiro.");
        break;

    case (32):
        printf("\nO DDD percente a Juiz de Fora.");
        break;

    case (19):
        printf("\nO DDD percente a Campinas.");
        break;

    case (27):
        printf("\nO DDD percente a Vitória.");
        break;

    case (31):
        printf("\nO DDD percente a Belo Horizonte.");
        break;

    default:

        printf("\nNúmero inválido!");
        break;
    }
}