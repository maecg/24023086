//verificação do Depósito Mínimo
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float deposito;
    printf("Validação de depósito mínimo");
    do{
        printf("\nInsira o valor que irá depositar: ");
        scanf("%f", &deposito);
        if(deposito<500){
            printf("Desculpe! O valor é menor que o mínimo para a criação de uma conta em nosso banco\n\tValor mínimo: R$ 500,00\n\tValor depositado: %.2f\n\tAValor em falta: %.2f", deposito, 500.0 - deposito);
        }else{
            printf("Excêlente! Passaremos para a próxima etapa da criação da conta.");
        }
    }while(deposito<500 && deposito>0);

    return 0;
}
