// Escreva uma função recursiva para verificar se uma palavra é palíndromo. Palíndromos são palavras ou frases que podem ser lidas da esquerda para a direita ou da direita para a esquerda. Ex: ARARA.
// Dica: Note que strings podem ter quantidade par ou ímpar de caracteres.

#include <stdio.h>
#include <string.h>

//retorna 1 se for palindromo e -1 se nao for
int palindromo(char frase[], int pos) {
    if(pos > strlen(frase)/2) return 1;
    if(frase[pos] != frase[strlen(frase)-1-pos]) return -1;
    else return palindromo(frase, pos+1);
}

int main() {
    //declarando variaveis e saída com o resultado
    char a[] = {'a', '\0'};
    printf("%d\n", palindromo(a, 0));
}