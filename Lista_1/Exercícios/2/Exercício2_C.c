#include <stdio.h>
#include <math.h>
#include <locale.h>>

int main(){
    setlocale(LC_ALL, "Portuguese"); //atribuindo a lingua local
    //declaração de variável
    char nome[32];
    int idade, dias;

    printf("Digite seu nome: ");
    fgets(nome, 32, stdin);
    printf("%s, quantos anos tem? ");
    scanf("%d", &idade);

    dias = (int)floor(idade*365 + idade/4);

    printf("%s, você viveu aproximadamenrte %i dias de vida", nome, dias);

    return 0;
}
