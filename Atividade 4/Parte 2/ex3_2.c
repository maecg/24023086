#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <string.h>

void lampada(int* l);
void buzer();
void motor();

int main() {
    setlocale(LC_ALL, "Portuguese");  // Corrigido o uso de setlocale

    int l = 0;  // Estado da lâmpada
    char res[10];  // Variável para entrada do usuário

    printf("**** Robotron 3000 ****\n");

    do {
        // Exibe o menu
        printf("Central de controle:\n\t[lampada]\n\t[buzer]\n\t[mover]\n\t[encerrar]\n=> ");
        fgets(res, sizeof(res), stdin);
        res[strcspn(res, "\n")] = 0;

        if (strcmp(res, "lampada") == 0) {
            lampada(&l);
        }
        else if (strcmp(res, "buzer") == 0) {
            buzer();
        }
        else if (strcmp(res, "mover") == 0) {
            motor();
        }
    }while (strcmp(res, "encerrar") != 0);
    printf("O Robotrin 3000 irá descansar em seu posto agora!");
    return 0;
}

void lampada(int* l) {
    if (*l == 0) {
        printf("Lâmpada foi acesa!\n");
        (*l)++;
    } else {
        printf("A lâmpada foi apagada!\n");
        (*l)--;
    }
}

void buzer() {
    printf("Buzer: ligado!\n");
    sleep(2);
    printf("Buzer: desligado!\n");
}

void motor() {
    static float gr = 0;

    do {
        printf("Deseja mover o braço para angulação? (0-360)\n=> ");
        scanf("%f", &gr);

        if (gr < 0 || gr > 360) {
            printf("O valor deve estar entre 0 e 360 graus!\n");
        }
    } while (gr < 0 || gr > 360);

    printf("O braço foi movido para %.2f graus.\n", gr);
}
