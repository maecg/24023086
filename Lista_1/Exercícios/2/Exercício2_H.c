//programa que leia sobre uma P.A: sua raz�o, um n�mero N e, em seguida, calcule e mostre seu N-�simo termo
#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    //declara��o das vari�veis
    float a0, n, an, r;

    //pergunta e recebe os par�metros da fun��o
    printf("Digite o primeiro n�mero da P.A ");
    scanf("%f", &a0);
    printf("Digite o qual � o n-�simo da sua P.A ");
    scanf("%f", &n);
    printf("Diite a raz�o da sua P.A ");
    scanf("%f", &r);

    an = a0 + (n-1)*r;

    printf("O n-�simo termo de sua sequ�ncia � %.2f", an);

    return 0;
}
