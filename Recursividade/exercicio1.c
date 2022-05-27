// Faça uma função em C para contar os dígitos de um determinado número usando recursão. Faça um programa principal que leia um número, acione a função e exiba o resultado gerado

#include <stdio.h>

int funcao(int n){
    // condicional que faz a contagem de dígitos e retorna a mesma
    if(n / 10 == 0){
        // caso base
        return 1;
    } else {
        return funcao(n / 10) + 1;
    }
}

int main(void){
    // variaveis
    int n;

    // recebendo um número
    printf("Digite um número: \n");
    scanf("%d", &n);

    // imprimindo a quantidade de dígitos do número através da chamada da função funcao
    printf("%d dígitos \n", funcao(n));
}