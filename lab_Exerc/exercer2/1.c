#include <stdio.h>
//imprim Os n primeiros numeros impares solicitados
int main(){
    int n;
    int i;
    printf("Até qual numero:\n");
    scanf("%d",&n);

    for(i = 0; i<=n;i++){
        if (i % 2 != 0)
        {
            printf("\n%d",i);
        }
        
    }
    printf("\nfim");
}