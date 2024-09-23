//resolução da questão 3a da prova 1 teórica
#include <stdio.h>

int main(){
    double f, c;


    printf("Insira o valor da temperatura em Farenheit: ");
    scanf("%lf", &c);

    c = (f-32)*(5.0/9.0);

    printf("A temperatura em celsius é: %lf", c);
    //como meu RA termína com 86 = (86-32)*0.55 = 30
    return 0;
}
