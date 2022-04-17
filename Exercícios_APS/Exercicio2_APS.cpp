#include<stdio.h>
#include<math.h>

int a, b, c, x1, x2;
float delta;

int main(){

    printf("Qual o valor de A na expressao de segundo grau: ");
    scanf ("%d",&a);
    printf("Qual o valor de B na expressao de segundo grau: ");
    scanf("%d",&b);
    printf("Qual o valor de C na expressao de segundo grau: ");
    scanf("%d",&c);

    //Calcula o delta
    delta = (b*b) - (4*a*c);

    //Verifica se o delta é negativo
    if (delta < 0){
        printf("delta = 0, as raizes sao 0");
    }
    //Verifica se o delta é igual a zero e calcula apenas uma raiz
    else if (delta == 0){
        x1 = (-b + (int)sqrt(delta))/2*a;
        printf("\nA raiz da equacao e igual a %d",x1);
    }
    //Verifica se o delta é maior que zero e calcula as duas raizes
    else if (delta > 0){
        x1 = (- b + ((int)sqrt(delta)))/ 2 * a;
        x2 =(- b  - ((int)sqrt(delta)))/2*a;
        printf("\nAs raiz da equacao sao iguais a %d e %d",x1,x2);
    }
    return 0;
}