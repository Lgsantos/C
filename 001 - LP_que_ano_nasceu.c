#include <stdio.h>

int main(void){
    int idade, anoAtual, anoNascimento;
    printf("Digite sua idade e o ano atual (ex. 21 2023): ");
    scanf("%d %d", &idade, &anoAtual);
    anoNascimento = anoAtual - idade;
    printf("Voce nasceu em %d", anoNascimento);
return 0;
}
