//contagem de passos para meta diária
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int p;
    int s =0;
    printf("******** METAS DE PASSOS **********\n  Meta atual: 10.000 passos");
    do{
        printf("\nInforme a quantidade de passos dados: ");
        scanf("%d", &p);
        if(p<0){
            printf("Insira um número de passos válido\n\tPassos são sempre positivos!");
        }else{
            s+=p;
            if(s>=10000){
                printf("PARABENS! A meta foi alcançada!");
            }else{
                float per = (float)s / 10000.0;
                printf("Siga em frente!\n Completou %.2f%% porcento da meta diaria", per * 100);
            }
        }

    }while(s<10000);
    return 0;
}
