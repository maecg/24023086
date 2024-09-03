//programa que leia os coef e calcula a raíz de uma equção do segundo grau
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Porgtuguse");

    float a, b, c, x1, x2;

    printf("Seja um equação do 2ºgrau definida como: \n ax^2 + bx +c = 0 ");
    printf("\nInforme os valores de a, b e c respectivamente: \n");
    scanf("%f%f%f", &a, &b, &c);

    x1 = (-b + sqrt(pow(b,2) - 4*a*c))/2*a ;
    x2 = (-b - sqrt(pow(b,2) - 4*a*c))/2*a ;

    printf("As duas raízes da equação são: \n %f \t %f", x1, x2);
}
