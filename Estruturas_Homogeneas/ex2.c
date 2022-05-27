// Faça um programa que leia e armazene 2 sequências de no máximo 100 inteiros cada. Em seguida imprima:
// ● A soma de cada elemento das duas sequências, nas respectivas posições
// ● A soma de cada elemento da primeira sequência com a segunda sequência invertida.
// Nota: As sequências de entrada podem não ter o mesmo tamanho. Iguale o tamanho das duas sequências preenchendo com zeros.
// Passo 1: Leia duas sequências
// 1 5 7 3 22 0 11
// 3 9 56
// Passo 2: Iguale o tamanho das sequências
// 1 5 7 3 22 0 11
// 3 9 56 0 0 0 0
// Passo 3: Calcule e imprima os requisitos da questão
// Soma: 4 14  63 3 22 0 11
// Soma invertida: 1 5 7 3 78 9 14

#include <stdio.h>
#define TAM_MAX 100
#define FLAG -1

int main(){
    //declarando variáveis/duas sequencias
    int seq1[TAM_MAX], seq2[TAM_MAX], v1 = 0, v2 = 0, n = 0, maior;

    //recebe a primeira sequencia
    for(int i=0; i<TAM_MAX; i++){
        scanf("%d", &n);
        if (n == FLAG) {
            i = v1; break;
        }
        seq1[i] = n;
    }

    //recebe a segunda sequencia
    for(int i=0; i<TAM_MAX; i++){
        scanf("%d", &n);
        if (n == FLAG) {
            i = v2; break;
        }
        seq2[i] = n;
    }

    //descobrindo a maior sequencia
    if(v1 > v2) {
        maior = v1;
    } else {
        maior = v2;
    }

    //fazendo a primeira soma
    for(int i=0; i<maior; i++){
        printf("%d \n", seq1[i]+seq2[i]);
    }

    //fazendo a segunda soma
    for(int i=0; i<maior; i++){
        printf("%d \n", seq1[i]+seq2[maior-1-i]);
    }
}