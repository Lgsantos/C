#include <stdio.h>

int main(void){
    int i, idade,nDias;
    i = nDias = 0;
    printf("Qual eh a sua idade? ");
    scanf("%d", &idade);
    while (i < idade){ //Prof. solicitou resolver esse problema com um acumulador
       nDias += 365;
       i++;
    }
    printf("Voce ja viveu %d dias.", nDias);
return 0;
}
