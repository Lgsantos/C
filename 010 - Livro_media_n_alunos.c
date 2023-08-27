/*
Programa que lê número de alunos, calcula e imprime a média individual e a da turma.
*/
#include <stdio.h>

int main(void){
    int nAlunos, i;
    float nota1, nota2, nota3, nota4, mediaAluno, aux, mediaTurma;
    printf("Digite o numero de alunos: ");
    scanf("%d", &nAlunos);
    i = 1;
    mediaTurma = 0;
    while (i <= nAlunos){
        printf("\nDigite as notas do aluno %d no formato: n1 n2 n3 n4 -> ", i);
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        mediaAluno = (nota1 + nota2 + nota3 + nota4)/4;
        printf("Media do aluno %d eh %.1f\n", i, mediaAluno);
        aux += mediaAluno;
        i++;
    }
    mediaTurma = aux / nAlunos;
    printf("\nMedia da turma eh %.1f", mediaTurma);
return 0;
}
