//Escreva um programa para ler o ano de nascimento de uma pessoa e
//escrever uma mensagem que diga se	ela poderá ou não votar este ano
//(não é necessário	considerar o mês em	que	ela	nasceu)

#include <stdio.h>

int main (){
    // variaveis
    int ano = 0, resultado = 0;

    // recebendo o ano de nascimento
    printf("Digite o seu ano de nascimento: \n");
    scanf("%d", &ano);

    // declarando resultado
    resultado = 2022 - ano;

    //condicional
    if(resultado > 16){
        printf("Voce pode votar esse ano! \n");
    } else {
        printf("Voce ainda nao pode votar! \n");
    }
}
