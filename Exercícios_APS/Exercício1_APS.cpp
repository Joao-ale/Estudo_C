#include<stdio.h>

int diasVivos, anos, meses, dias;

int main(){
	printf("Quantos dias de vida voce tem: ");
	scanf("%d",&diasVivos);
	
	//Calcula quantos anos corresponde aos dias digitados
	anos = diasVivos / 365;
	//Verifica a ortografia a ser utilizada, singular ou plural
	if (anos > 1){
		printf("\n%d anos", anos);
	}
	else{
		printf("\n%d ano",anos);
	}
	//Calcula a quantidade de meses baseado no módulo da divisão anterior
	meses = (diasVivos % 365) / 30;
	//Verifica a ortografia a ser utilizada, singular ou plural
	if (meses > 1){
		printf("\n%d meses",meses);
	}
	else{
		printf("\n%d mes",meses);
	}
	//Calcula a quantidade de dias baseado no módulo da divisão anterior
	dias =  (diasVivos % 365) % 30;
	if (dias > 1){
		printf("\n%d dias",dias);
	}
	else{
		printf("\n%d dia",dias);
	}
	return 0;
}
