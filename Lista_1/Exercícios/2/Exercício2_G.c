//Program que leia pressão, volume e temperatura, e depois calcule a massa de ar
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float p, v, m, temp;

    printf("Informe a pressão, volume e temperatura, nessa ordem, do pneu: ");
    scanf("%f %f %f", &p ,&v, &temp);

    m = p*v/(0.37*(temp+460));

    printf("A massa de ar nos pneus é de %f gramas", m);
}
