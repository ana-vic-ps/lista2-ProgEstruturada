#include <stdio.h>

/*Questão 2 - Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação, for maior que 20% do salário, imprima: “Empréstimo não concedido”, caso contrário, imprima: “Empréstimo
concedido”*/

int main(){

    float salario, valorPrestacao;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("\nDigite o valor da prestação do empréstimo: ");
    scanf("%f", &valorPrestacao);

    if(valorPrestacao > (salario * 20)/100){

        printf("\nEmpréstimo não concedido!");

    }
    else{
        printf("\nEmpréstimo concedido!");
    }



}