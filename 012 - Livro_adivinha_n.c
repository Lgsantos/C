/*
Programa para o usu�rio adivinhar um n�mero aleat�rio de 0 a 10. A cada tentativa, recebe indica��o se o
n�mero tentado � menor ou maior que o n�mero secreto. Quando acerto-o, o programa indica quantas tentativas
foram necess�rias.
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
