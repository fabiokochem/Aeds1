// Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0:
// S = 1/1! + 1/2!  + 1/3! + ...+1 /N!
// double serie (int n)
// Faça um programa principal que leia um número, acione a função e exiba o resultado gerado.

#include <stdio.h>

double serie(int n , int fat){
    // condicional que calcula o valor de S
    if(fat == 1){
        // caso base
        return 1;
    } else {
        return (serie(n-1, fat/n) + 1.0/fat);
    }
}

int main(){
    // variaveis
    int n = 0, fat = 1;

    // recebendo o valor de N
    scanf("%d", &n);

    // looping que calcula o fatorial
    for(int i = 1; i <= n; i++){
			fat *= i;
		}
    // imprime o valor de S através da chamada da função serie
    printf("%.3lf \n", serie(n, fat));
}