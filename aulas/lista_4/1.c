#include <stdio.h>

int main() {
    int ano1, mes1, dia1;
    int ano2, mes2, dia2;
    
    printf("Primeira data:\n");
    printf("Digite o ano: ");
    scanf("%d", &ano1);
    printf("Digite o mês: ");
    scanf("%d", &mes1);
    printf("Digite o dia: ");
    scanf("%d", &dia1);
    
    printf("\nSegunda data:\n");
    printf("Digite o ano: ");
    scanf("%d", &ano2);
    printf("Digite o mês: ");
    scanf("%d", &mes2);
    printf("Digite o dia: ");
    scanf("%d", &dia2);
    
    printf("\nResultado:\n");
    
    if (ano1 < ano2) {
        printf("%d/%d/%d ocorreu antes de %d/%d/%d\n", dia1, mes1, ano1, dia2, mes2, ano2);
    }
    else if (ano1 > ano2) {
        printf("%d/%d/%d ocorreu antes de %d/%d/%d\n", dia2, mes2, ano2, dia1, mes1, ano1);
    }
    else { 
        if (mes1 < mes2) {
            printf("%d/%d/%d ocorreu antes de %d/%d/%d\n", dia1, mes1, ano1, dia2, mes2, ano2);
        }
        else if (mes1 > mes2) {
            printf("%d/%d/%d ocorreu antes de %d/%d/%d\n", dia2, mes2, ano2, dia1, mes1, ano1);
        }
        else {
            if (dia1 < dia2) {
                printf("%d/%d/%d ocorreu antes de %d/%d/%d\n", dia1, mes1, ano1, dia2, mes2, ano2);
            }
            else if (dia1 > dia2) {
                printf("%d/%d/%d ocorreu antes de %d/%d/%d\n", dia2, mes2, ano2, dia1, mes1, ano1);
            }
            else {
                printf("As datas são iguais\n");
            }
        }
    }
    
    return 0;
}