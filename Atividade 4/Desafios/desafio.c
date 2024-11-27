//Desafio - An�lise de Desempenho de A��es
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float desvio, mepop;
    int t, t0 = 0;
    float valor, valortotal;
    float vetorValor[64];
    void des(float vetorValor[64], int t, float* mepop, float* desvio);

    printf("Qual e o periodo de analise(em dias): ");
    scanf("%d", &t);

    while(t0<t){
        printf("Insira o valor da acao: ");
        scanf("%f", &valor);
        vetorValor[t0] = valor;
        valortotal += valor;
        t0++;
    }

    des(vetorValor, t, &mepop, &desvio);

    printf("O desvio padrao e %.2f\n", desvio);

    if(desvio<0.05){
        printf("A acao e estavel!\n");
    }else{
        printf("A acao e volatil!");
    }
    return 0;
}

void des(float vetorValor[64], int t, float* mepop, float* desvio){
    float valortotal = 0;
    *desvio = 0;

    for(int i = 0; i<t;i++){
        *mepop = vetorValor[i]/(float)t;
    }

    for(int i = 0; i<t; i++){
        *desvio+=(pow(vetorValor[i]-*mepop,2))/(float)t;
    }

    *desvio = sqrt((*desvio)/(float)(t-1));
}
