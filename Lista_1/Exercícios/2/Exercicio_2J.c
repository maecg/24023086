//programa que, a partir da divis�o de dinheiro de 1, 10, 50 e 100 reais e suas quantidades, calcule o montante
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int u, d, cq, c, total;

    printf("Insira a quantidade de moedas de 1 real: ");
    scanf("%d", &u);
    printf("\nInsira a quantidade de c�dulas de 10 reais: ");
    scanf("%d", &d);
    printf("\nInsira a quantidade de c�dulas de 50 reais: ");
    scanf("%d", &cq);
    printf("\nInsira a quantidade de c�dulas de 100 reias: ");
    scanf("%d", &c);

    total = 100*c+50*cq+10*d+u;
    printf("\nO montante � %i reais", total);
}
