#include <stdio.h>
#include <math.h>

int main(){
    float r, area;

    printf("Qual o raio do c�rculo? ");
    scanf("%f", &r);

    area = 3.14*pow(r,2);

    printf("A �rea do c�culo � %.2f", area);

    return 0;
}
