//resolução da questão 3b da prova 1 teórica

#include <stdio.h>

int main(){
    int f,c;

    printf("Insira uum valor de temperatura em Farenheit: ");
    scanf("%d", &f);

    c = (f-32)*(5/9);

    printf("O valor da temperatura em graus Celsius: %d", c);
    //como é uma divisão inteira, há truncamento, e como o valor está entre 0 e 1
    //qualquer valor, como os últimos 3 dígitos do meu RA, retorna 0

    return 0;
}
