#include<stdio.h>


int i,par, impar;

int main(){
    for (i = 2000; i <= 4000; i++){
        if (i % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }

    printf("\nA quantidade de numeros par e %d", par);
    printf("\nA quantidade de numeros impares e %d", impar);
    return 0;
}