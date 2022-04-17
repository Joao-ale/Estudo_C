#include<stdio.h>

int diasVivos, anos, meses, dias;

int main(){
	printf("Quantos dias de vida voce tem: ");
	scanf("%d",&diasVivos);
	anos = diasVivos / 365;
	if (anos > 1){
		printf("\n%d anos", anos);
	}
	else{
		printf("\n%d ano",anos);
	}
	meses = (diasVivos % 365) / 30;
	if (meses > 1){
		printf("\n%d meses",meses);
	}
	else{
		printf("\n%d mes",meses);
	}
	dias =  (diasVivos % 365) % 30;
	if (dias > 1){
		printf("\n%d dias",dias);
	}
	else{
		printf("\n%d dia",dias);
	}
	return 0;
}
