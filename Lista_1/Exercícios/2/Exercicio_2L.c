/*programa que solicite ao usuário um valor
(total) em dinheiro, e informe quantas notas de: 1 real, 5 reais, 10 reais, 50 reais e 100 reais serão
necessárias para compor este valor, de forma que seja utilizado o menor número de notas possível */
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int m, u, d, cq, c;

    printf("Insira o montante que possui: ");
    scanf("%i", &m);

    c = (m/100);
    cq = (int)floor(m -  c*100)/50;
    d = (int)floor(m - c*100 - cq*50)/10;
    u = (m-c*100 - cq*50 - d*10);
    printf("Possui um mínimo de cédulas de: \t %i de R$100 \t %i de R$50 \t %i de R$10 \n Sobrando um total de %i moedas de 1 real", c, cq, d, u);

    return 0;
}
