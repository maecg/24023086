//simula��o de navega��o aut�noma
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x =0, y = 0;
    void mover(int x, int y);
    printf("******** CENTRAL DE CONTROLE DE MOVIMENTO ********");
    mover(x,y);


    printf("FIM! O rob� 2400tx ir� nanar!\nAt� a pr�xima.");
    return 0;
}

void mover(int x, int y){
    static char res[10];
    do{
        printf("\nVoc� se encontra em (%d,%d)", x, y);
        printf("\n\t\tCentral de cotrole\n\t[frente]\n\t[esquerda]\n\t[direita]\n\t[baixo]\n\t[sair]\n=> ");
        fgets(res, sizeof(res), stdin);
        res[strcspn(res, "\n")] = 0;

        if(strcmp(res, "frente") == 0){
            y++;
            if(y<5){
                printf("Voc� se movimentou para %s", res);
            }else{
                printf("Voc� chegou ao limite superior do mapa.\n Favor mudar de dire��o!");
                y--;
            }
        }else if(strcmp(res, "esquerda") == 0){
            x--;
            if(x>=0){
                printf("Voc� se moveu para %s", res);
            }else{
                printf("Voc� chegou a borda lateral esquerda do mapa.\nFavor mudar de dire��o!");
                x++;
            }
        }else if(strcmp(res, "direita") == 0){
            x++;
            if(x<5){
                printf("Voc� se moveu para %s", res);
            }else{
                printf("Voc� chegou a borda lateral direita do mapa.\nFavor mudar de dire��o!");
                x--;
            }
        }else if(strcmp(res, "baixo") == 0){
            y--;
            if(y>=0){
                printf("Voc� se movimentou para %s", res);
            }else{
                printf("Voc� chegou ao limite superior do mapa.\n Favor mudar de dire��o!");
                y++;
            }
        }
    }while(strcmp(res, "sair") != 0);
}
