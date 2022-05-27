// Construa um programa que l� uma op��o conforme abaixo (usar estrutura SWITCH) e o
// sal�rio atual do funcion�rio, calcula e exibe o novo sal�rio:
// A = aumento de 8% no sal�rio;
// B = aumento de 11% no sal�rio;
// C = aumento fixo no sal�rio
// (de R$ 350,00 se o sal�rio atual for at� R$1000 e de R$200,00 se o sal�rio atual for maior
// que R$ 1000).

#include <stdio.h>

int main(){
    // variaveis
    float salario = 0, aumento = 0;
    char opcao;

    // recebendo o valor do salario e qual a opcao
    printf("Digite seu salario e a opcao escolhida(A, B e C): \n");
    scanf("%f %c", &salario, &opcao);

    // condicional e imprimindo o novo salario
    switch(opcao){
        case 'A':
        salario *= 1.08;
        printf("O novo salario eh: %.2f \n", salario);
        break;

        case 'B':
        salario *= 1.11;
        printf("O novo salario eh: %.2f \n", salario);
        break;

        case 'C':
        if(salario < 1000){
            salario += 350;
        } else {
            salario += 200;
        }
        printf("O novo salario eh: %.2f \n", salario);
        break;

        default:
            printf("Valores Invalidos! \n");
    }
}
