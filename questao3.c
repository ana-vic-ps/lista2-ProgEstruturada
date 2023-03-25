#include <stdio.h>

/*Questão 3 - Faça um programa que 3 números e mostre o maior e menor entre eles. Se, por acaso, os números forem
iguais, imprima a mensagem “Números iguais”.*/

int main()
{

    float num1, num2, num3;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    if ((num1 > num2) & (num2 > num3))
    {

        printf("\nO número %0.2f é o maior dentre os números digitados e o número %0.2f é o menor dentre eles.", num1, num3);
    }

    else if ((num2 > num3) & (num3 > num1))
    {

        printf("\nO número %0.2f é o maior dentre os números digitados e o número %0.2f é o menor dentre eles.", num2, num1);
    }

    else if ((num3 > num2) & (num2 > num1))
    {
        printf("\nO número %0.2f é o maior dentre os números digitados e o número %0.2f é o menor dentre eles.", num3, num1);
    }

    else if ((num1 > num3) & (num3 > num2))
    {
        printf("\nO número %0.2f é o maior dentre os números digitados e o número %0.2f é o menor dentre eles.", num1, num2);
    }

    else if ((num2 > num1) & (num1 > num3))
    {
        printf("\nO número %0.2f é o maior dentre os números digitados e o número %0.2f é o menor dentre eles.", num2, num3);
    }

    else if ((num3 > num1) & (num1 > num2))
    {
        printf("\nO número %0.2f é o maior dentre os números digitados e o número %0.2f é o menor dentre eles.", num3, num2);
    }

    else
    {
        printf("\nNúmweos iguais!");
    }
}