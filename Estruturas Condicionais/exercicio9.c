// Escreva um programa para ler 3 valores inteiros e escrever o maior deles.
// Considere que o usuário não informará valores iguais.

#include <stdio.h>

int main (){
    // variaveis
    int n1 = 0, n2 = 0, n3 = 0, maior = 0;

    // recebendo os valores dos 3 numeros
    printf("Digite os tres numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    // condicional
    if(n1 > n2 && n1 > n3){
        maior = n1;
    } else if (n2 > n1 && n2 > n3){
        maior = n2;
    } else {
        maior = n3;
    }

    // imprimindo maior numero
    printf("Maior numero: %d", maior);
}
