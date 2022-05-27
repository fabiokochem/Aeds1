// Faça um programa que leia três valores inteiros e chame uma função que receba o endereço destes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela no programa principal.

#include <stdio.h>

int func(int *a,int *b, int *c){
    // declarando variaveis
    int p1 = 0, p2 = 0, p3 = 0;
    
    // condição caso todos os valores sejam iguais (return 1)
    if (*a == *b && *b == *c) {
        return 1;
    } 

    //condicional variavel a
    if (*a > *b && *a > *c){
        p1 = *a;
    } else if (*a > *b && *a < *c || *a < *b && *a > *c ){
        p2 = *a;
    } else {
        p3 = *a;
    }

    // condicional variavel b
    if(*b > *a && *b > *c){
        p1 = *b;
    } else if (*b > *a && *b < *c || *b < *a && *a > *c ){
        p2 = *b;
    } else {
        p3 = *b;
    }

    // condicional variavel c 
    if(*c > *a && *c > *b){
        p1 = *c;
    } else if (*c > *a && *c < *b || *c < *a && *c > *b ){
        p2 = *c;
    } else {
        p3 = *c;
    }

    // organizando valores
    *a = p3;
    *b = p2;
    *c = p1;

    return 0;
}

int main(void){
    // declarando variaveis
    int a, b, c, p1, p2, p3;
    
    // recebendo valores
    scanf("%d %d %d", &a, &b, &c);

    // chamando a função
    func(&a, &b, &c);

    // imprimindo valores em ordem crescente após passar pela função 
    printf("%d %d %d \n", a, b, c);
}