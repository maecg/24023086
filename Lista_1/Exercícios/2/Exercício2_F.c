#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float tf, tc;

    printf("Insira a temperatura em Farenheit: ");
    scanf("%f", &tf);

    tc = (tf -32)*5/9;

    printf("A convers�o para Celsius : %.1f�C",tc);
    return 0;
}
