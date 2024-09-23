//resolução da questão 5 da prova 1 terica
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float t;

    printf("Insira a temperatura do galp�o em graus C�lsius: ");
    scanf("%f", &t);

    if(t<-10){
        printf("Risco baixo - condições aceitáveis congelados");
    }else if(t>=-10 && t<=0){
        printf("Risco moderado - Condições aceitáveis para armazenamentto refrigeraddo");
    }else if(t>=1 && t<=10 || t == 15){
        printf("Risco Alto - Monitore a teperaturaa");
    }else{
        printf("Risco critico - Ação imediata necessári!");
    }
    return 0;
}
