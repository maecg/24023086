#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");//colocando a lingua local
    char nome[64]; //setando o char de até 64 caracteres

    //dando os comandos principais
    printf("Olá eu sou o Nº1, como é o seu nome? ");
    scanf("%s", nome);
    //fgets(nome,64, stdin);//análogo ao scanf
    printf("Bem vindo ao clube %s", nome);

    return 0;
}
