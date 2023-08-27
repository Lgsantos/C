/*
Programa que lê números inteiros até que 0 (zero) seja digitado. Neste momento, a soma de todos
os números pares digitados é mostrada.
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
