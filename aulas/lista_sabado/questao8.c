/*Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada 
(as notas têm pesos respectivos de 1, 2 e 3).*/

#include <stdio.h>

int main(){
    float N1;
    float N2;
    float N3;

    printf("Nota 1:");
    scanf("%f", &N1);
    printf("Nota 2:");
    scanf("%f", &N2);
    printf("Nota 2:");
    scanf("%f", &N3);

    printf("O aluno tirou %f de media", ((N1 * 1 + N2 * 2 + N3 * 3)/6));
}