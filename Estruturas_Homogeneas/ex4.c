// Escreva um programa que lê uma frase e substitui a primeira letra de cada palavra pelo seu correspondente maiúsculo. Para isso, de acordo com a tabela ASCII, basta subtrair 32 de cada elemento que deseje alterar. Lembre-se de verificar se a letra já é maiúscula.

#include <stdio.h>
#include <string.h>

int main(){
    //recebendo variaveis
    char frase[41];
    int tamanho;

    //recebendo a frase e contando o tamanho da mesma
    gets(frase);
    tamanho = strlen(frase);

    //verificando se a letra já é maiuscula, caso não seja e seja a primeira letra da palavra, transforma em maiuscula
    for(int i = 0; i <= tamanho; i++){
        if((frase[i] < 'A' || frase[i] > 'Z') && frase[i] == ' '){
            frase[i + 1] -= 32;
        }
    }
    //saída da frase alterada
    printf("%s \n", frase);
}