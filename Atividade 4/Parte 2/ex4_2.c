#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <string.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int nivel = 100;
    void bateria(int* nivel);
    void carga(int* nivel);
    char r;
    do{
        bateria(&nivel);
        carga(&nivel);
        printf("Deseja sair do prograna?(s/n)\n=> ");
        scanf(" %c", &r);
        getchar();
    }while(r == 'n');
    return 0;
}

void bateria(int* nivel){
    static char res[10];
    do{
        printf("\nBateria do celular: %d%%\n", *nivel);
        fflush(stdout);
        sleep(1);
        *nivel-=20;
        if(*nivel == 0){
            printf("A bateria acabou!\nCarregamento automático inicializado...");
            break;
        }else if(*nivel<=20 && *nivel>0) {
            printf("Deseja carregar o celular?(sim/não)");
            fgets(res, sizeof(res), stdin);
            res[strcspn(res, "\n")] =0;
        }
    }while(strcmp(res, "sim") != 0);
}

void carga(int* nivel){
    printf("Carregando...");
    printf("Bateria: ");
    do{
        *nivel+=10;
        sleep(1);
        printf("...%d%%", *nivel);
        fflush(stdout);
    }while(*nivel<100);
}
