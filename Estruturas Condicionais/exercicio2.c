//Escreva um programa para ler o ano de nascimento de uma pessoa e
//escrever uma mensagem que diga se	ela poder� ou n�o votar este ano
//(n�o � necess�rio	considerar o m�s em	que	ela	nasceu)

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
