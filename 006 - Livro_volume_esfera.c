#include <stdio.h>
#include <math.h>

int main(void){
    float r, volume;
    const PI = 3.1415;
    printf("Digite o raio da esfera: ");
    scanf("%f", &r);
    volume = (4/3)* PI *pow(r,3);
    printf("O volume da esfera eh %.2f", volume);
return 0;
}
