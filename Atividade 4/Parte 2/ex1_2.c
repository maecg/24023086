#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char res[10];
    int f = 0, d = 0;

    printf("\t\tCENTRAL DE CONTROLE DO ROBÔ\n");

    do {
        printf("\nVocê se encontra em (%d,%d) no mapa", d, f);
        printf("\nDeseja se movimentar para qual direção?\n");
        printf("\t[frente]\n");
        printf("\t[esquerda]\n");
        printf("\t[direita]\n");
        printf("\t[baixo]\n");
        printf("\t[sair]\n");

        fgets(res, sizeof(res), stdin);
        res[strcspn(res, "\n")] = 0;

        printf("Você escolheu: %s\n", res);

        if (strcmp(res, "frente") == 0) {
            f++;
            if (f < 10) {
                printf("Você se moveu para frente\n");
            } else {
                printf("Você chegou numa parte da borda superior do mapa.\nEscolha outra direção!\n");
                f--;
            }
        } else if (strcmp(res, "direita") == 0) {
            d++;
            if (d < 10) {
                printf("Você se movimentou para a direita\n");
            } else {
                printf("Você chegou a borda lateral direita. Escolha outra direção!\n");
                d--;
            }
        } else if (strcmp(res, "esquerda") == 0) {
            d--;
            if (d >= 0) {
                printf("Você se movimentou para a esquerda\n");
            } else {
                printf("Você chegou a borda lateral esquerda. Escolha outra direção!\n");
                d++;
            }
        } else if (strcmp(res, "baixo") == 0) {
            f--;
            if (f >= 0) {
                printf("Você se moveu para baixo\n");
            } else {
                printf("Você chegou numa parte da borda inferior do mapa.\nEscolha outra direção!\n");
                f++;
            }
        }
    } while (strcmp(res, "sair") != 0);

    return 0;
}
