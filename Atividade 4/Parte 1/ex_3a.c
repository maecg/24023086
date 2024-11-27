//contagem de passos para meta diária
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int p, s =0;
    printf("******** METAS DE PASSOS **********\n  Meta atual: 10.000 passos")
    do{
        prinf("\nInforme a quantidade de passos dados");
        scanf("%d", &p);
        if(p<0){
            printf("Insira um número de passos válido\n\tPassos são sempre positivos!")
        }else{
            s+=p;
            if(s==10000){
                prinf("PARABÉNS! A meta foi alcançada!");
            }else{
                float per = (float)s/100.0
                printf("Siga em frente!\n Completou %d % da meta diária", per);
            }
        }

    }while(s<10000);
    return 0;
}
