#include <stdio.h>

int main(){

    float metros;

    printf("Quantos metros:");
    scanf("%f", &metros);

    printf("deu %.2f metros \n %.2f decimetros \n %.2f centimetros \n %.2f milimetros.",metros,(metros / 10),(metros / 100), (metros / 1000));
}
