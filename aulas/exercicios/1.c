#include <stdio.h>

int main(){
    int ano;
    int dia;
    int mes;
    int ano2;
    int dia2;
    int mes2;

    printf("O ano:\n");
    scanf("%d", &ano);
    printf("O mes:\n");
    scanf("%d", &mes);
    printf("O dia:\n");
    scanf("%d", &dia);
    
    printf("\n sua data é %d/%d/%d", ano,mes,dia);
    
    printf("Outro ano:\n");
    scanf("%d", &ano2);
    printf("Outro mes:\n");
    scanf("%d", &mes2);
    printf("Outro dia:\n");
    scanf("%d", &dia2);

    printf("\n sua data é %d/%d/%d \n", ano2,mes2,dia2);

    if(ano > ano2){
        printf("Data 1 veio depois");
    }
    else if (ano < ano2)
    {
        printf("Data 2 veio depois");
    }
    else{
        if(mes > mes2){
            printf("Data 1 veio depois");
        }
        else if (mes < mes2)
        {
            printf("Data 2 veio depois");
        }
        else{
            if(dia > dia2){
                printf("Data 1 veio depois");
            }
            else if (dia < dia2)
            {
                printf("Data 2 veio depois");
            }
            else{
                printf("a data é a mesma");
            }
            
        }
        
    }
    
}