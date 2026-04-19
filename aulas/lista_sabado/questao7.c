/*Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça
 a questão dos anos bissextos e considere sempre que um mês possui 30 dias.*/

 #include <stdio.h>

 int main(){
    int mes;
    int dia;

    printf("\nDia do mes:\n");
    scanf("%d",&dia);
    printf("\n numero do mes:\n");
    scanf("%d",&mes);

    printf("Se passaram %d dias do inicio do ano", (((mes - 1) * 30) + dia));
 }