// Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula abaixo.
//       S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)
// Faça um programa que leia N e imprima o valor retornado pela função.

#include <stdio.h>

float formula(int n){
    // variaveis
    float s = 0, f = 1;
    // looping que calcula o valor de S
    for(int i = 0; i < n; i++){
        f += i;
        s += ((f*f)+1)/(f+3);
    }
    // retorna S
    return s;
}

int main(void){
    // variaveis
    int n;

    // recebendo o valor de N
    printf("Digite o valor de N: \n");
    scanf("%d", &n);

    // imprimindo o valor de S através da chamada da função formula
    printf("O valor de S é: %.2f \n", formula(n));
}