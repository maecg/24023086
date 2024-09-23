//resolução da questão 5 da prova 1 terica
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float t;

    printf("Insira a temperatura do galp�o em graus C�lsius: ");
    scanf("%f", &t);

    if(t<-10){
        printf("Risco baixo - condi��es aceit�veis congelados");
    }else if(t>=-10 && t<=0){
        printf("Risco moderado - Condi���es aceit�veis para armazenamentto refrigeraddo");
    }else if(t>=1 && t<=10 || t == 15){
        printf("Risco Alto - Monitore a teperaturaa");
    }else{
        printf("Risco cr�tico - A��o imediata necess�ri!");
    }
    return 0;
}
