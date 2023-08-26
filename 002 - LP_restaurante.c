#include <stdio.h>

int main(void){
    int idade;
    printf("Qual eh a sua idade? ");
    scanf("%d", &idade);
    if (idade < 6){
        printf("Voce nao paga refeicao.");
    }
    else if (idade <= 10){
        printf("Voce paga meia refeicao.");
    }
    else{
        printf("Voce paga refeicao inteira.");
    }
return 0;
}
