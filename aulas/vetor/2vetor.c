#include <stdio.h>

int main(){
    double vetor[5], vetor2[5], resultado;
    int i;

    for(i=0;i<5;i++){
        printf("Entre com um valor %d para vetor 1:", i+1);
        scanf("%lf", &vetor[i]);
        
    }
    printf("\n\n");
    for(i=0;i<5;i++){
        printf("Entre com valor %d para vetor 2", i+1);
        scanf("%lf", &vetor2[i]);
    }

    resultado 0.0;
    for(i=0;i<5;i++){
        resultado = resultado + (vetor[i]*vetor2[i]);
        
    }
    printf("\n\nO produto interno e: %lf\n",resultado);
}