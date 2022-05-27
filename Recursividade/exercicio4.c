// Faça uma função recursiva que calcula o resto da divisão usando subtrações sucessivas:
// int resto (int numerador, int denominador)
// Faça um programa principal que leia dois números, acione a função e exiba o resultado gerado.

#include <stdio.h>

int resto(int num, int den){
    // condicional que retorna o resto da subtração sucessiva
    if(num - den < 0){
        // caso base
        return num;
    } else {
        return resto(num - den, den);
    }
}

int main(void){
    // variáveis
    int num = 0, den = 0;

    // recebendo os valores do numerador e denominador
    printf("Digite dois números: \n");
    scanf("%d %d", &num, &den);

    // imprimindo o resto das subtrações sucessivas através da chamada da função resto
    printf("O resto é: %d \n", resto(num, den));
}