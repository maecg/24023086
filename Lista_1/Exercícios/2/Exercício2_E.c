//Programa que calcula quantas latas de tinta por m2, 1m^2 é 300ml e numa lata vem 2l
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    //devido ao setlocale, para por números reais é preciso por , ao invés de .

    float altura, largura;
    int latas;

    printf("Qual é a altura da parede? ");
    scanf("%f", &altura);

    printf("Quel é  a largura da parede? ");
    scanf("%f", &largura);

    float quantidade = (altura*largura*0.3)/2 ;
    latas = (int)ceil(quantidade);

    printf("A quantidade de latas necessárias é %d latas", latas);
}
