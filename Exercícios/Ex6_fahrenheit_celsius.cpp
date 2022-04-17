#include<stdio.h>

float F,C;

int main(){

    printf("Qual a temperatura em Fahrenheit: ");
    scanf("%f",&F);

    C = ((F -32) *5) / 9;

    printf("Esta fazendo %.2f C",C);

    return 0;
}