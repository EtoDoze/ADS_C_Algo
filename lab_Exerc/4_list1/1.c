#include <stdio.h>

int main(){

    char letra;

    printf("Escreva uma letra:");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'a':
        printf("\né vogal\n");
        break;
    case 'e':
        printf("\né vogal\n");
        break;
    case 'i':
        printf("\né vogal\n");
        break;
    case 'o':
        printf("\né vogal\n");
        break;
    case 'u':
        printf("\né vogal\n");
        break;
    
    default:
        printf("\nNão é vogal");
        break;
    }

    return 0;
}