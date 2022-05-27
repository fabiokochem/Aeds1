//Maçãs custam R$ 0,30 cada se você comprar menos de uma dúzia, e R$ 0,25 se pelo menos doze forem adquiridos. escreva um
//programa que lê o número de maçãs compradas, calcula e escreve o valor total da compra.

#include <stdio.h>

int main (){
    // variaveis
    int qtd;
    float calculo;

    // recebendo a qtd de macas
    printf("Digite a quantidade de macas compradas: \n");
    scanf("%d", &qtd);

    // condicional
    if(qtd < 12){
        calculo = qtd * 0.3;
    } else {
        calculo = qtd * 0.25;
    }

    // imprimindo o valor total da compra
    printf("O valor total da compra foi: %.2f R$ \n", calculo);
}
