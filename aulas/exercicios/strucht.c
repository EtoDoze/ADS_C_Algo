#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[40];
    int idade;
    char sexo;
    char curso[20];
};

int main(){
    struct Aluno a, b;

    strcpy(a.nome, "Amadeus");
    a.idade = 19;
    a.sexo = 'M';
    strcpy(a.curso, "ADS");
    
    strcpy(b.nome, "Kira");
    b.idade = 24;
    b.sexo = 'M';
    strcpy(b.curso, "ADS");

    printf("a.nome = %s, a.idade = %d, a.sexo = %c, a.curso = %s\n", a.nome,a.idade,a.sexo,a.curso);
    printf("b.nome = %s, b.idade = %d, b.sexo = %c, b.curso = %s\n", b.nome,b.idade,b.sexo,b.curso);
}
