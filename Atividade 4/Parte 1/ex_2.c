#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float ncombustivel;
    printf("   Monitoramento de combust�vel\n");
    do{
        do{
            printf("Insira seu n�vel de combust�vel(0-100%):");
            scanf("%f", &ncombustivel);
        }while(ncombustivel<0 || ncombustivel>100);

        if(ncombustivel<15){
            printf("Combust�vel em %.2f%\nSeu combust�vel est� baixo, por favor recarregue!\n", ncombustivel);
        }else{
            printf("Combust�vel em %.2f%\n", ncombustivel);
        }
    }while(ncombustivel<100);

    return 0;
}
