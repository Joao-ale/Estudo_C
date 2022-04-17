#include<stdio.h>

float salario,novoSalario,reajuste;

int main(){
    printf("Entre com seu salario: R$");
    scanf("%f",&salario);

    //Verifica a faixa salarial e faz o calculo do reajuste conforme o salario
    if (0 <= salario && salario <= 400){
        reajuste = salario*0.15;
        novoSalario = salario+reajuste;
        printf(" O funcionario tera um aumento de 15 porcento com o reajuste de R$%.2f, tendo um novo salario de R$%.2f",reajuste,novoSalario);
    }
    else if (400.01<= salario && salario<= 800.00){
        reajuste = salario*0.12;
        novoSalario = salario + reajuste;
        printf(" O funcionario tera um aumento de 12 porcento com o reajuste de R$%.2f, tendo um novo salario de R$%.2f",reajuste,novoSalario);
    }
    else if (salario >= 800.01 && salario <= 1200){
        reajuste = salario*0.10;
        novoSalario = salario+reajuste;
        printf(" O funcionario tera um aumento de 10 porcento com o reajuste de R$%.2f, tendo um novo salario de R$%.2f",reajuste,novoSalario);
    }
    else if (salario >= 1200.01 && salario <= 2000.00){
        reajuste = salario*0.07;
        novoSalario = salario + reajuste;
        printf(" O funcionario tera um aumento de 7 porcento com o reajuste de R$%.2f, tendo um novo salario de R$%.2f",reajuste,novoSalario);
    }
    else if(salario>2000.00){
        reajuste = salario*0.04;
        novoSalario = salario+reajuste;
        printf(" O funcionario tera um aumento de 4 porcento com o reajuste de R$%.2f, tendo um novo salario de R$%.2f",reajuste,novoSalario);
    }
    
    return 0;
}