#include<stdio.h>

float n1,n2;
char op;

int main(){
	printf("Digite o primeiro numero:\n");
	scanf("%f",&n1);
	printf("\nDigite o operador:\n");
	scanf("%s",&op);
	printf("\nDigite o segundo numero:\n ");
	scanf("%f",&n2);
	
	switch(op){
		case '+':
			printf("\nO resultado da soma e %.2f\n",n1+n2);
			break;
		case'-':
			printf("\nO resultado da subtracao e %.2f\n",n1-n2);
			break;
		case'*':
			printf("\nO resultado da multiplicacao e %.2f\n",n1*n2);
			break;
		case'/'	:
			if(n2!=0)
				printf("\nO resultado da divisao e %.2f\n",n1/n2);
			else
				printf("\nNao existe divisao por 0\n");
			break;
		default:
			printf("\nOperador invalido\n");
	}
	return 0;
}
