#include<stdio.h>

int i, cont;
double altura;

int main(){
    for (i = 1; i <= 10; i++)
    {
        printf("\nQual a sua altura: ");
        scanf("%lf",&altura);

        if (altura > 1.60){
            cont++;
        }
    }
    printf("\nEntre as 10 apenas %d pessoas tem a altura maior que 1.60\n", cont);
    return 0;
}

