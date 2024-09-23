//resolução da questão 2 da prova 1 teórica
#include <stdio.h>

int main(){
    int a,b;
    float media;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    media = (a+b)/2.0; //como média é do tipo float é necessário esta adaptação

    printf("A média é: %.3f", media);
    
    return 0;
}