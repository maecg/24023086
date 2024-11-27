//simulação de navegação autônoma
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x =0, y = 0;
    void mover(int x, int y);
    printf("******** CENTRAL DE CONTROLE DE MOVIMENTO ********");
    mover(x,y);


    printf("FIM! O robô 2400tx irá nanar!\nAté a próxima.");
    return 0;
}

void mover(int x, int y){
    static char res[10];
    do{
        printf("\nVocê se encontra em (%d,%d)", x, y);
        printf("\n\t\tCentral de cotrole\n\t[frente]\n\t[esquerda]\n\t[direita]\n\t[baixo]\n\t[sair]\n=> ");
        fgets(res, sizeof(res), stdin);
        res[strcspn(res, "\n")] = 0;

        if(strcmp(res, "frente") == 0){
            y++;
            if(y<5){
                printf("Você se movimentou para %s", res);
            }else{
                printf("Você chegou ao limite superior do mapa.\n Favor mudar de direção!");
                y--;
            }
        }else if(strcmp(res, "esquerda") == 0){
            x--;
            if(x>=0){
                printf("Você se moveu para %s", res);
            }else{
                printf("Você chegou a borda lateral esquerda do mapa.\nFavor mudar de direção!");
                x++;
            }
        }else if(strcmp(res, "direita") == 0){
            x++;
            if(x<5){
                printf("Você se moveu para %s", res);
            }else{
                printf("Você chegou a borda lateral direita do mapa.\nFavor mudar de direção!");
                x--;
            }
        }else if(strcmp(res, "baixo") == 0){
            y--;
            if(y>=0){
                printf("Você se movimentou para %s", res);
            }else{
                printf("Você chegou ao limite superior do mapa.\n Favor mudar de direção!");
                y++;
            }
        }
    }while(strcmp(res, "sair") != 0);
}
