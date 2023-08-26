#include <stdio.h>

int main(void){
    int idade;
    printf("Qual eh a sua idade? ");
    scanf("%d", &idade);
    (idade < 6) ? printf("Voce nao paga refeicao."):
    (idade <= 10) ? printf("Voce paga meia refeicao."):
    printf("Voce paga refeicao inteira.");
return 0;
}
