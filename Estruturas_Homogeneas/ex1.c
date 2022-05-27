// Faça um algoritmo que leia e armazene uma sequência de no máximo 50 inteiros e imprima na forma de tabela os números pares presentes na sequência, bem como o valor dos seus índices no vetor. Dica: o caractere ‘\t’ de tabulação pode ser usado para formatar o espaçamento como tabela. 
// Exemplo:
// Entrada: 1 3 8 12 9 7 -5 -6 21
// Saída:
// Valores   Índices
//    8         2
//   12         3
//   -6         7

#include <stdio.h>
#define TAM_MAX 50 

int main(void){
    // variáveis
    int seq[TAM_MAX] = {}, i;
    
    // looping que recebe os inteiros
    for(i = 0; i < TAM_MAX; i++){
        scanf("%d", &seq[i]);
    }
    
    printf("Valores \t Índices \n");
    // looping que imprime os valores pares e seus índices
    for(i = 0; i < TAM_MAX; i++){
        if(seq[i] % 2 == 0){
            printf("%d \t\t %d \n", seq[i], i);
        }
    }
}