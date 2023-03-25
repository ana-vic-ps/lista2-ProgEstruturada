#include <stdio.h>

/*Questão 4 - Faça um programa em que o usuário digite 4 notas, em seguida, calcule e imprima a média e mostre o
resulado de acordo com as seguintes informações.
Média de 0 até 3 - Reprovado.
Média de 3.1 até 6.9 – Recuperação.
Média acima de 6.9 – Aprovada.*/

int main()
{

    float nota1, nota2, nota3, nota4, media;

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a 2ª nota: ");
    scanf("%f", &nota2);

    printf("\nDigite a 3ª nota: ");
    scanf("%f", &nota3);

    printf("\nDigite a 4ª nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if ((media >= 0) & (media <= 3))
    {

        printf("\nMédia = %0.2f. REPROVADO!", media);
    }

    else if ((media >= 3.1) & (media <= 6.9))
    {
        printf("\nMédia = %0.2f. RECUPERAÇÃO!", media);
    }

    else if (media > 6.9)
    {

        printf("\nMédia = %0.2f. APROVADO!", media);
    }

    else
    {
        printf("\nValores inválidos!");
    }
}