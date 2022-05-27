// Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula abaixo.
//    S = 1 + 1/1! + 1/2!  + 1/3! + ...+1 /N!
//Faça um programa que leia N e imprima o valor retornado pela função.

#include <stdio.h>

float fat(int n){
    // variáveis
    float s = 1, f = 1;
    // looping que cálcula o valor de S a partir de N
    for(int i = 1; i <= n; i++){
        f*= i;
        s += 1/f;
    }
    // retornando S 
    return s;
}

int main(void){
    // declarando variáveis
    int n;

    // recebendo o valor de N
    printf("Digite o valor de N: \n");
    scanf("%d", &n);

    /// imprimindo o valor de S através da chamada da função fat
    printf("O valor de S é: %f\n", fat(n));
}