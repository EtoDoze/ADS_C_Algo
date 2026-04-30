#include <stdio.h>

int main(){

    int n;
    int i;
    int soma;
    soma = 1;

    printf("Numero:\n");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        soma = soma * i; 
    }
    printf("%d", soma);
    
    return 0;
}