#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");//colocando a lingua local
    char nome[64]; //setando o char de at� 64 caracteres

    //dando os comandos principais
    printf("Ol� eu sou o N�1, como � o seu nome? ");
    scanf("%s", nome);
    //fgets(nome,64, stdin);//an�logo ao scanf
    printf("Bem vindo ao clube %s", nome);

    return 0;
}
