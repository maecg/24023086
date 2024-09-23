//resolução da questão 4 da prova 1 terica

#include <stdio.h>

int main(){
    float t;

    printf("Insira a temperatura em graus Celsius: ");
    scaf("%f", &t);

    if(t<=0){
        printf("Geleira - Temperatura muito fria");
    }else if(t>=1 && t<=15){
        printf("Frio - Pode precisar de um casaco!");
    }else if(t>=16 && t<=25){
        printf("Agrad�vel - Tempo bom para sair!");
    }else if(t>=26 && t<=35){
        printf("Quente - �timopara  um dia de praia!");
    }else{
        pintf("Muto quente - Mantenha-se hidratado!");
    }
    return 0;
}
