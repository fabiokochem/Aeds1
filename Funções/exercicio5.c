// Faça um procedimento que recebe a média final de um aluno, identifica e exibe o seu conceito, conforme a tabela abaixo. Faça um programa que leia a média de N alunos, acionando o procedimento para cada um deles. (N deve ser lido do teclado)

#include <stdio.h>

char notas(float media){
    // recebendo a média final de cada aluno
    printf("Digite a sua média final: \n");
    scanf("%f", &media);

    // condicional que verifica o conceito e imprime na tela
    if(media <= 39){
        printf("F \n");
    } else if(media >= 40 && media <= 59){
        printf("E \n");
    } else if(media >= 60 && media <= 69){
        printf("D \n");
    } else if(media >= 70 && media <=79){
        printf("C \n");
    } else if(media >= 80 && media <= 89){
        printf("B \n");
    } else {
        printf("A \n");
    }
}

int main(void){
    // declarando variáveis
    int n;
    float media;
    char conceito;

    // recebendo a quantidade de alunos
    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &n);    

    // looping que chama a função notas enquanto o contador for menor que a qtd de alunos
    for(int i = 0; i < n; i++){
        notas(media);
    }
}