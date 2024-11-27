#include <stdio.h>
#include <locale.h>
#include <unistd.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float temp;
    printf("Monitoramento do laboratório\n(para sair do monitoramento digite -274)");

    do{
        printf("\nInsira a temperatura: ");
        scanf("%f", &temp);
        if(temp>=20 && temp <= 25){
            printf("Temperatura ideal! Sem problemas!");
        }else if(temp != -274){
            printf("Alerta! Crítico - Temperatura deve estar entre 20 e 25 graus Celsius");
        }

        if(temp != -274){
            sleep(1);
        }

    }while(temp != 100);

    return 0;
}
