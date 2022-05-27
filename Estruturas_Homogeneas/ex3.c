// Escreva uma função chamada contaVogais que recebe uma frase e retorna a quantidade de vogais na frase. Lembre-se de contar tanto maiúsculas quanto minúsculas.
// Exemplo
//     Entrada:
//     O rato roeu a roupa do rei de roma.
//     Saída:
//     16

#include <stdio.h>
#include <string.h>

int contaVogais(char frase[]){
    //declarando variaveis
    int n = 0, tamanho;

    //recebendo a frase e contando o tamanho da mesma
    gets(frase);
    tamanho = strlen(frase);

    //condições para contas a qtd de vogais
    for(int i = 0; i < tamanho; i++){
        switch(frase[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                n++;
        }
    }
    return n;
}

int main (){
    //declarando variaveis
    char frase[] = {'a','e','p'};

    //saída da quantidade de vogais
    printf("%d \n", contaVogais(frase));
}