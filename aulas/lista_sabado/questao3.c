/*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada
 pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda 
 dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). 
 Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler 
 as quantidades de pães e de broas, e depois calcular os dados solicitados.*/

 #include <stdio.h>

 int main(){
    float paes;
    float broas;

    printf("\nQuantos paes franceses vendeu:\n");
    scanf("%f", &paes);
    printf("\nQuantas broas vendeu:\n");
    scanf("%f", &broas);

    printf("\nArrecadou no total %f Reais\n",((paes * 0,12) + (broas * 1.50)));
    printf("\nVoce deve guardar %f na poupanca", (((paes * 0,12) + (broas * 1.50)) * 0.10));

 }