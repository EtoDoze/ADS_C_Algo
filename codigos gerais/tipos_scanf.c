#include <stdio.h>

int main(){
    char c;
    float b;
    int a;

    printf("Entre com um caractere:");
    scanf("%c", &c);
    printf("Entre com um float:");
    scanf("%f", &b);
    printf("Entre com um numero:");
    scanf("%d", &a);

    printf("Os dados lidos foram: %c, %f, %d, \n",c,b,a);
}