#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float ncombustivel;
    printf("   Monitoramento de combustível\n");
    do{
        do{
            printf("Insira seu nível de combustível(0-100%):");
            scanf("%f", &ncombustivel);
        }while(ncombustivel<0 || ncombustivel>100);

        if(ncombustivel<15){
            printf("Combustível em %.2f%\nSeu combustível está baixo, por favor recarregue!\n", ncombustivel);
        }else{
            printf("Combustível em %.2f%\n", ncombustivel);
        }
    }while(ncombustivel<100);

    return 0;
}
