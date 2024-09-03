#include <stdio.h>
#include <math.h>

int main(){
    float r, area;

    printf("Qual o raio do círculo? ");
    scanf("%f", &r);

    area = 3.14*pow(r,2);

    printf("A área do cículo é %.2f", area);

    return 0;
}
