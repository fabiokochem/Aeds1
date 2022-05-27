// Faça uma função que lê um número indeterminado de notas de alunos, calcula e retorna a média das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê o número de alunos e imprime a média retornada pela função.

#include <stdio.h>
#define FLAG -99

float media(int n){
    // variaveis
    float alunos = 0, aprovados = 0, nota;
    // looping 
    for(int i = 0; i < n; i++){
        // recebendo nota de um aluno
        printf("Digite a nota deste aluno: \n");
        scanf("%f", &nota);
        // FLAG que interrompe o processo
        if(nota == FLAG){
            break;
        }
        // verificação se o aluno foi aprovado
        if(nota >= 6){
            aprovados++;
        }
        alunos++;
    }
    // retornando porcentagem de aprovados
    return aprovados / alunos;
}

int main(void){
    // variaveis
    int n;

    // recebendo a qtd de alunos
    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &n);

    // retorna a média de aprovados através da chamada da função media
    printf("A média de aprovados é: %.2f \n", media(n));
}