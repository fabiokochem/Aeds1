// Tendo como entrada a	altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino)
// de uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando	as seguintes
// Fórmulas:
// - para	homens:	(72.7 * Altura)	– 58
// - para	mulheres:	(62.1 * Altura)	– 44.7

#include <stdio.h>

int main (){
    // variaveis
    int sexo = 0;
    float altura = 0, formula;

    // recebendo altura e sexo
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Digite seu sexo: \n 1: FEMININO 2: MASCULINO \n");
    scanf("%d", &sexo);

    // condicional
    if (sexo == 1){
        formula = (72.7 * altura) - 58;
    } else {
        formula = (62.1 * altura) - 44.7;
    }

    // imprimindo peso ideal
    printf("Seu peso ideal eh: %.1f", formula);
}
