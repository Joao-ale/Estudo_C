#include<stdio.h>

int tabuada,i, multiplicador;

int main(){
    printf("Qual tabuada deseja ver: ");
    scanf("%d",&tabuada);

    for (i=1; i <= 10; i++){
        multiplicador = i * tabuada;
        printf("\n%d X %d = %d",i, tabuada, multiplicador);
    }
    
    return 0;
}