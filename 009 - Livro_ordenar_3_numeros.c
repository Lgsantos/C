/*
Programa que lê 3 números e os imprime em ordem decrescente.
*/
#include <stdio.h>

int main(void){
    float a, b, c, menor, maior, meio;
    printf("Digite 3 numeros no formato: a b c\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a >= b){
        maior = a;
        menor = b;
        if (c > maior){
            maior = c;
            meio = a;
        } else if (c < menor){
            menor = c;
            meio = b;
        }
    } else{
        maior = b;
        menor = a;
        if (c > maior){
            maior = c;
            meio = b;
        } else if (c < menor){
            menor = c;
            meio = a;
        }
    }
    printf("%.1f >= %.1f >= %.1f", maior, meio, menor);
return 0;
}
