#include <stdio.h>

struct Aluno
{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float media;
};

int vezes = 2;
int main()
{
    struct Aluno turma[vezes];
    int i;

    for (i = 0; i < vezes; i++)
    {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", turma[i].nome);

        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);

        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);

        turma[i].media = (turma[i].nota1 + turma[i].nota2) / 2;
    }

    printf("\n DADOS DOS ALUNOS n");

    for (i = 0; i < vezes; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", turma[i].nome);
        printf("Matricula: %d\n", turma[i].matricula);
        printf("Nota 1: %.2f\n", turma[i].nota1);
        printf("Nota 2: %.2f\n", turma[i].nota2);
        printf("Media: %.2f\n", turma[i].media);
    }

printf("\nALUNOS:\n");

for (i = 0; i < vezes; i++)
{
    printf("\nAluno %d\n", i + 1);
    printf("Nome: %s\n", turma[i].nome);
    printf("Matricula: %d\n", turma[i].matricula);
    printf("Nota 1: %.2f\n", turma[i].nota1);
    printf("Nota 2: %.2f\n", turma[i].nota2);
    printf("Media: %.2f\n", turma[i].media);
}
    return 0;
}