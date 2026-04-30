//ler nota, se nota acima de 7, aprovado, reprovado ou prova final

#include <stdio.h>

int main(){
    float nota;

    printf("\nInsira nota 1:\n");
    scanf("%f", &nota);

    if (nota >= 7)
    {
        printf("\nAprovado");
    }
    else if((nota >= 5) && (nota < 7)){
        printf("\n Prova final\n");
    }
    else{
        printf("\nreprovado");
    }

    return 0;
    
}