#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c;
    printf("Digite os comprimentos dos lados dos triangulo, no formato: A B C ");
    scanf("%f %f %f", &a, &b,&c);
    if ((a < b + c) && (b < a + c) && (c < a + b)){
        if ((a == b) && (b == c)){
            printf("Triangulo formado eh EQUILATERO");
        }
        else if ((a == b) || (b == c) || (a == c)){
            printf("Triangulo formado eh ISOCELES");
        }
        else{
            printf("Triangulo formado eh ESCALENO");
        }
    }
    else{
        printf("As medidas %.2f %.2f %.2f nao formam um triangulo.", a, b, c);
    }
return 0;
}
