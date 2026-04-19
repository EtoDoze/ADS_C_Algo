/*A imobiliária Imóveis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões
 de um terreno e depois exibir a área do terreno.*/

#include <stdio.h>

int main(){
    int largura;
    int altura;

    printf("Qual a largura do terreno:");
    scanf("%d", &largura);
    printf("Qual a altura do terreno:");
    scanf("%d", &altura);

    printf("A area do terreno e %d", (altura*largura));

}