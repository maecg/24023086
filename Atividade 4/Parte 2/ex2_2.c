#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float dis;
    void sensor(float* dis);
    printf("\t\tSensor de dist�ncia para rob�\n");
    printf("Para sair, digite [-1]\n");
    sensor(&dis);

    printf("\nPrograma finalizado!");
    return 0;
}

void sensor(float* dis){
    do{
        printf("\nInsira a dist�ncia captada: ");
        scanf("%f", &*dis);
        if(*dis != -1){
            printf("Dist�ncia captada: %.2f cm", *dis);
        }
    }while(*dis >10);
}
