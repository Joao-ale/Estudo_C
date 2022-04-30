#include<stdio.h>

float n1,n2,media;
int i, aprov, exame, reprov;

int main(){
    for (i = 1; i <= 10; i++){
        printf("\nEntre com sua primeira nota: ");
        scanf("%f",&n1);
        printf("\nEntre com a segunda nota: ");
        scanf("%f",&n2);

        media = (n1 + n2) / 2;

        if (media >= 7){
            aprov++;
        }
        else if (media >= 3 && media < 7){
            exame++;
        }
        else if (media >= 0 && media < 3){
            reprov++;
        }
        printf("\nProximo aluno");
    }
    printf("%d alunos foram aprovados\n", aprov);
    printf("%d alunos foram para exame\n", exame);
    printf("%d alunos foram reprovados", reprov);
    return 0;
}