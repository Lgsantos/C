#include <stdio.h>

int main(void){
    int i, n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    printf("Os numeros pares menores ou iguais a %d sao:\n", n);
    for (i=2; i<=n; i+=2){
        printf("%d ", i);
    }
return 0;
}
