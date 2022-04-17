#include<stdio.h>

int i;
float c;

int main(){
	for(i=50;i<=65;i++){
		c = 0.56*(i-32);
		printf("%.2fC\n",c);
	}
	return 0;
}
