#include <stdio.h>
#include <math.h>

int main(){
    int Xa, Ya, Xb, Yb;
    float distancia;

    printf("Qual valor de Xa: ");
    scanf("%d", &Xa);

    printf("Qual valor de Ya: ");
    scanf("%d", &Ya);

    printf("Qual valor de Xb: ");
    scanf("%d", &Xb);

    printf("Qual valor de Yb: ");
    scanf("%d", &Yb);

    distancia = sqrt(((Xb - Xa) * (Xb - Xa)) + ((Yb - Ya) * (Yb - Ya)));

    printf("A distancia entre os pontos e %.2f\n", distancia);

    return 0;
}