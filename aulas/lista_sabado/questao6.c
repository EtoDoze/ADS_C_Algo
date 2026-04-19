/*O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia
 o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
  o peso do prato.*/

  #include <stdio.h>

  int main(){
    float quilo;

    printf("\n Quilos do prato de comida:\n");
    scanf("%f", &quilo);

    printf("\nVoce vai pagar %f RS", (quilo * 12));
  }