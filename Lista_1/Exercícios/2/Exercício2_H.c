//programa que leia sobre uma P.A: sua razão, um número N e, em seguida, calcule e mostre seu N-ésimo termo
#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    //declaração das variáveis
    float a0, n, an, r;

    //pergunta e recebe os parâmetros da função
    printf("Digite o primeiro número da P.A ");
    scanf("%f", &a0);
    printf("Digite o qual é o n-ésimo da sua P.A ");
    scanf("%f", &n);
    printf("Diite a razão da sua P.A ");
    scanf("%f", &r);

    an = a0 + (n-1)*r;

    printf("O n-ésimo termo de sua sequência é %.2f", an);

    return 0;
}
