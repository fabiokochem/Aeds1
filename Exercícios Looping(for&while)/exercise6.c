// Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:
// S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
// O algoritmo deve escrever cada termo gerado e o valor final de S.


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    float s = 1, f = 1;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        f += i;
        s += 1 / f;
    }

    printf("O valor de S eh: %f \n", s);
}

