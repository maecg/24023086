//DESAFIO
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>


int x = 5, y = 5;//S�o 10x10 em dec�metros
void bateria(float start);
void movimento(), sensor(), atuar(), automov();
void monitoramentoBateria(float start);
int nb = 100;
int main(){
    setlocale(LC_ALL, "Portuguese");
    float start = clock();
    int r;
    printf("******* Controle Completo Robotron ********");
    do{
        do{
            printf("\nCentral de controle");
            printf("\n\t[1]-Controle de Movimento\t[2]-Leitor de sensor de dist�ncian\n\t[3]-Controle de atua��o\t\t[4]-Monitoramento da bateria\n\t[5]-Navega��o aut�noma\n\t[6]-Sair\n=> ");
            scanf("%d", &r);
        }while(r>6 && r <1);
        switch(r){
            case 1: movimento();
            break;
            case 2: sensor();
            break;
            case 3: atuar();
            break;
            case 4: monitoramentoBateria(start);
            break;
            case 5: automov();
            break;
            default: printf("Saindo...");
            break;
        }
    }while(r != 6);
    bateria(start);
}

void bateria(float start){
    float end = clock();
    float dur = end - start;
    if((int)dur%10 == 0){
        nb-=5;
    }
}
void monitoramentoBateria(float start){
    char res[4];
    do{
        printf("N�vel da beteria em %d\n\t[sair]", nb);
        fgets(res, sizeof(res), stdin);
        res[strcspn(res, "\n")] == 0;
        bateria(start);
    }while(strcmp(res, "sair") != 0);
}

void movimento() {
    char res[10];
    do {
        printf("Central de movimento\n");
        printf("\t[frente]\n\t[direita]\n\t[esquerda]\n\t[baixo]\n\t[sensor]\n\t[sair]\n");
        scanf("%s", res);

        if (strcmp(res, "frente") == 0) {
            y++;
            if (y < 10) {
                printf("Voc� se moveu para frente. Posi��o: (%d, %d)\n", x, y);
            } else {
                printf("Limite superior atingido!\n");
                y--;
            }
        } else if (strcmp(res, "direita") == 0) {
            x++;
            if (x < 10) {
                printf("Voc� se moveu para direita. Posi��o: (%d, %d)\n", x, y);
            } else {
                printf("Limite direito atingido!\n");
                x--;
            }
        } else if (strcmp(res, "esquerda") == 0) {
            x--;
            if (x >= 0) {
                printf("Voc� se moveu para esquerda. Posi��o: (%d, %d)\n", x, y);
            } else {
                printf("Limite esquerdo atingido!\n");
                x++;
            }
        } else if (strcmp(res, "baixo") == 0) {
            y--;
            if (y >= 0) {
                printf("Voc� se moveu para baixo. Posi��o: (%d, %d)\n", x, y);
            } else {
                printf("Limite inferior atingido!\n");
                y++;
            }
        } else if (strcmp(res, "sensor") == 0) {
            sensor();
        }
    } while (strcmp(res, "sair") != 0);
}

void sensor(){
    printf("Sensor de dist�ncia\n");
    printf("Voc� est�\n\t%d cent�metros da esquerda\n\t%d cent�metros da direita\n\t%d cent�metros do fundo", x*10,(10-x)*10, y*10);
}

void atuar(){
    char res[64];
    srand(time(NULL));
    int t;

    printf("Qual fun��o deseja adicionar ao Robotron? ");
    scanf(" %[^\n]", res);//pode colocar no lugar do fgets

    do{
        t = rand()%6;
        if(t != 0){
            printf("\nFun��o '%s' implementada com �xito!\n", res);
        }else{
            printf("\nErro na implementa��o. Tentando novamente...\n");
        }
    }while (t == 0);
}

void automov() {
    srand(time(NULL));
    int t;
    char p;

    do{
        t = rand() % 4 + 1;
        if (t == 1 && y < 9) y++;
        else if (t == 2 && x < 9) x++;
        else if (t == 3 && x > 0) x--;
        else if (t == 4 && y > 0) y--;

        printf("Robotron se moveu. Posi��o atual: (%d, %d)\n", x, y);
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &p);
        getchar();
    }while(p == 's');
}
