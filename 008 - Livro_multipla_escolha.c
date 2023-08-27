#include <stdio.h>
#include <math.h>

int main(void){
    float preco;
    int origem;
    printf("Digite o preco e o codigo da origem do produto.Ex. 3.25 1\n");
    scanf("%f %d", &preco, &origem);
    if (origem >= 7 && origem <=9){
        origem = 7;
    } else if (origem >=10 && origem <= 20){
        origem = 10;
    } else if ((origem == 5 || origem == 6) || (origem >=25 && origem <= 35)){
        origem = 25;
    } else{
        origem = 99;
    }
//    (origem >= 7 && origem <=9) ? origem = 7 :
//    (origem >=10 && origem <= 20) ? origem = 10 :
//    ((origem == 5 || origem == 6) || (origem >=25 && origem <= 35)) ? origem = 25 : origem = 40;
    switch (origem){
        case 1: printf("%.2f - Produto do Sul", preco); break;
        case 2: printf("%.2f - Produto do Norte", preco); break;
        case 3: printf("%.2f - Produto do Leste", preco); break;
        case 4: printf("%.2f - Produto do Oeste", preco); break;
        case 7: printf("%.2f - Produto do Sudeste", preco); break;
        case 10: printf("%.2f - Produto do Centro-Oeste", preco); break;
        case 25: printf("%.2f - Produto do Nordeste", preco); break;
        default: printf("%.2f - Produto Importado", preco);
    }
return 0;
}
