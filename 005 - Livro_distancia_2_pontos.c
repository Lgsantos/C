#include <stdio.h>
#include <math.h>

int main(void){
    float x1, y1, x2, y2, dist;
    printf("Digite as coordenadas do ponto P, no formato x, y: ");
    scanf("%f, %f", &x1, &y1);
    printf("Digite as coordenadas do ponto Q, no formato x, y: ");
    scanf("%f, %f", &x2, &y2);
    dist = sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2));
    printf("A distancia entre os pontos P e Q é de %.2f", dist);
return 0;
}
