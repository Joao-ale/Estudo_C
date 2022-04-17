#include<stdio.h>

float sal,novosal;

int main()
{
    printf("Qual o seu salario: R$");
    scanf("%f",&sal);
    novosal = (sal *25/100)+ sal;
    printf("Com o aumento seu salario sera de R$%.2f",novosal);

    return 0;
}
