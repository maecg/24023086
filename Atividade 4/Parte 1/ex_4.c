//verifica��o do Dep�sito M�nimo
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float deposito;
    printf("Valida��o de dep�sito m�nimo");
    do{
        printf("\nInsira o valor que ir� depositar: ");
        scanf("%f", &deposito);
        if(deposito<500){
            printf("Desculpe! O valor � menor que o m�nimo para a cria��o de uma conta em nosso banco\n\tValor m�nimo: R$ 500,00\n\tValor depositado: %.2f\n\tAValor em falta: %.2f", deposito, 500.0 - deposito);
        }else{
            printf("Exc�lente! Passaremos para a pr�xima etapa da cria��o da conta.");
        }
    }while(deposito<500 && deposito>0);

    return 0;
}
