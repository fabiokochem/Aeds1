// Faça uma função para encontrar a soma dos dígitos de um número usando recursão. Faça um programa principal que leia um número, acione a função e exiba o resultado gerado

#include <stdio.h>

int func(int n){
    // condicional que faz a soma e retorna para a impressão na main
    if(n / 10 == 0){
        // caso base
        return n;
    } else {
        return func(n % 10) + func(n / 10);
    }
}

int main(void){
    // variaveis 
    int n;

    // recebendo um número
    printf("Digite um número: \n");
    scanf("%d", &n);

    // imprimindo a soma dos dígitos através da chamada da função func
    printf("A soma dos dígitos desse número é: %d\n", func(n));
}