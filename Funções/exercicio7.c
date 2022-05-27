// Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor lógico (true ou false). Faça um programa que lê N números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, dependendo se foi retornado verdadeiro ou falso pela função.

#include <stdio.h>

int funcao(int numero){
    // retornando verificação
    return numero >= 0;
}

int main(void){
    // variaveis
    int n, numero;

    // recebendo o valor de N
    printf("Digite N: \n");
    scanf("%d", &n);

    // looping que recebe um numero e chama a função funcao para verificar seu valor(positivo ou negativo)
    // looping segue até contador i ser igual a N recebido pelo usuário
    for(int i = 0; i < n; i++){
        printf("Digite um número: \n");
        scanf("%d", &numero);
        printf("%d \n",funcao(numero));
    }
}