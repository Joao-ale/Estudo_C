#include<stdio.h>

int alunos, i;
float altura, raio, areaCilindro;

int main(){
    printf("Quantos alunos tem na sala? ");
    scanf("%d",&alunos);

    for(i=1;i<=alunos;i++){
        printf("Qual a altura do cilindro: ");
        scanf("%f",&altura);
        printf("Qual o raio do cilindro: ");
        scanf("%f",&raio);
        areaCilindro = 3.141592 * raio * raio * altura;
        printf("A area do cilindro do aluno %d, e de %.2f\n", i,areaCilindro); 
    }
    return 0;
}