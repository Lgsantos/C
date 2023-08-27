/*
Programa para o usuário adivinhar um número aleatório de 0 a 10. A cada tentativa, recebe indicação se o
número tentado é menor ou maior que o número secreto. Quando acerto-o, o programa indica quantas tentativas
foram necessárias.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int nAleatorio, guess, tentativas;
    srand(time(0));
    nAleatorio = (rand() % 10) + 1;
    tentativas = 0;
//    printf("%d", nAleatorio);
    do{
        printf("Adivinhe o numero secreto entre 0 e 10: ");
        scanf("%d", &guess);
        tentativas += 1;
        (guess == nAleatorio) ? printf("Voce acertou com %d tentativa(s).", tentativas) :
        (guess < nAleatorio) ? printf("Digite um numero maior!\n") : printf("Digite um numero menor!\n");
    } while (guess != nAleatorio);
return 0;
}
