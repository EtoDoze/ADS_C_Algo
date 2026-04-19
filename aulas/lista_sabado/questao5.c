/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo
 para ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu
  colocar no tanque.*/

  #include <stdio.h>

  int main(){
    float reais_gastos;
    float valor_gasolina;

    printf("\n Quanto você vai gastar com gasolina:\n");
    scanf("%f", &reais_gastos);
    printf("\n Quanto custa a gasolina:\n");
    scanf("%f", &valor_gasolina);
    
    printf("\nVoce tera %f de gasolina pelo valor de %f reais", (reais_gastos / valor_gasolina), reais_gastos);


  }