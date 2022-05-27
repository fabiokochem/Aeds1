// A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados
// sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um
// número não determinado de pessoas, calcule e exiba a média de salário da população (a
// condição de parada pode ser um flag ou a quantidade N). Faça um programa que acione o
// procedimento

#include <stdio.h>

#define FLAG -1

void populacao(float salario, int filhos){
    // declarando variáveis
    float media = 0, salario_total = 0;
    int total_hab = 0;
    // looping com flag para parar o procedimento
    while(1){
        printf("Digite seu salário: \n");
        scanf("%f", &salario);
        // FLAG
        if(salario == FLAG){
            break;
        }
        printf("Digite quantos filhos você tem: \n");
        scanf("%d", &filhos);

        salario_total += salario;
        total_hab++;
    }
    // calculo da média de salário
    media = salario_total / total_hab;
    // imprime o resultado da média
    printf("Media de salário da população: %.2f\n", media);
}

int main(void){
    // declarando variáveis
    int filhos, total_hab;
    float salario, media, salario_total;

    // chamando a função populacao
    populacao(salario, filhos);
}