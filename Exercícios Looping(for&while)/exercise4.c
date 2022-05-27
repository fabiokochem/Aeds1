// Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E:
// E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n = 0;
    float e = 0, f = 1;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        f *= i;
        e += 1 / f;
    }

    printf("O valor de E eh: %.3f \n", e);
}
