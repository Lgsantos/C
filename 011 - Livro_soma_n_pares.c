/*
Programa que l� n�meros inteiros at� que 0 (zero) seja digitado. Neste momento, a soma de todos
os n�meros pares digitados � mostrada.
*/
#include <stdio.h>
#include <math.h>

int main(void){
    int somaPares, n;
    n = 1;
    somaPares = 0;
    while (n != 0){
        printf("Digite 0 (zero) para SAIR ou outro numero inteiro para CONTINUAR: ");
        scanf("%d", &n);
        if (n % 2 == 0){
            somaPares += n;
        }
    }
    (somaPares == 0) ? printf("Nenhum numero foi digitado") :
        printf("A soma de todos os numeros pares digitados eh %d", somaPares);
return 0;
}
