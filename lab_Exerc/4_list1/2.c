#include <stdio.h>

int main(){
    char letra;

    printf("\ncaracter:\n");
    scanf("%c", &letra);

    if (letra >= 'a' && letra <= 'z')
    {
        printf("\nLetra %c é minuscula", letra);
    }
    else
    {
        printf("\nLetra %c é maiuscula", letra);
    }
    
    return 0;
}