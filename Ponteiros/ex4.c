// Faça um programa que leia dois valores inteiros e chame uma função que receba o endereço destes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela no programa principal.

#include <stdio.h>

void func (int *x, int *y){
    //declarando variáveis
    int swap;
    // condição swap caso um valor seja maior que outro
    if(*x < *y){
        swap = *y;
        *y = *x;
        *x = swap;
    } 
}

int main(void){
    // declarando variáveis
    int x, y;

    // recebendo valores
    scanf("%d %d", &x, &y);

    //chamando a função
    func(&x, &y);

    // imprimindo os valores após passar pela função
    printf("%d %d\n", x, y);
}