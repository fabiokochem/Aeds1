// Faça uma função recursiva que calcula a divisão usando subtrações sucessivas:
// int divisao (int numerador, int denominador)
// Faça um programa principal que leia dois números, acione a função e exiba o resultado gerado.

#include <stdio.h>

int divisao(int numerador, int denominador){
    // condicional que retorna o resultado da divisão
    if(numerador - denominador < 0){
        // caso base
        return 0;
    } else {
        return divisao(numerador - denominador, denominador) + 1;
    }
}

int main(void){
    // variáveis
    int numerador, denominador;

    // recebendo os valores do numerador e denominador
    printf("Digite um numerador e um denominador: \n");
    scanf("%d %d", &numerador, &denominador);

    // imprime o resultado da divisão através da chamada da função divisao
    printf("O resultado da divisão é: %d", divisao(numerador, denominador));
}