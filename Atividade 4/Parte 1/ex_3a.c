//contagem de passos para meta di�ria
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
            printf("Insira um n�mero de passos v�lido\n\tPassos s�o sempre positivos!")
        }else{
            s+=p;
            if(s==10000){
                prinf("PARAB�NS! A meta foi alcan�ada!");
            }else{
                float per = (float)s/100.0
                printf("Siga em frente!\n Completou %d % da meta di�ria", per);
            }
        }

    }while(s<10000);
    return 0;
}
