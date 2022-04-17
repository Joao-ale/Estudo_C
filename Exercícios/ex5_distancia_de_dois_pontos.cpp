#include<stdio.h>
#include<math.h>

float x1,w1,x2,w2,distancia;

int main(){
    
    printf("Entre com o valor de x1: ");
    scanf("%f",&x1);
    printf("Entre com o valor de w1: ");
    scanf("%f",&w1);
    printf("Entre com o valor de x2: ");
    scanf("%f",&x2);
    printf("Entre com o valor de w2: ");
    scanf("%f",&w2);

    distancia = sqrt((x2-x1)*(x2-x1) + (w2-w1)*(w2-w1));

    printf("%.4f",distancia);


    return 0;
}