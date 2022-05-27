// Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis. O programa deve comparar os endereços das variáveis e exibir o maior deles

#include <stdio.h>

int main(void){
    // declarando variáveis
    int n1, n2, *p = NULL, *x = NULL, maior = 0;

    // recebendo o valor de dois inteiros
    printf("Digite o valor de dois inteiros: \n");
    scanf("%d %d", &n1, &n2);

    // associando inteiros à variáveis
    p = &n1;
    x = &n2;

    // condicional para descobrir qual variável é maior
    if(*p > *x){
        maior = *p;
    } else {
        maior = *x;
    }
    
    // imprimindo maior inteiro
    printf("O maior inteiro é: %d \n", maior);
}