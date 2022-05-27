// Escreva um programa que leia o valor de 3 ângulos um triângulo e escreva se o triângulo é
// Acutângulo, Retângulo ou Obtusângulo. Sendo que:
// − Triângulo	Retângulo: possui um ângulo reto. (igual a 90º)
// − Triângulo	Obtusângulo: possui	um ângulo obtuso. (maior que 90º)
// - Triângulo	Acutângulo:	possui três ângulos	agudos. (menor que 90º)

#include <stdio.h>

int main (){
    // variaveis
    float a1 = 0, a2 = 0, a3 = 0;

    // recebendo valores
    printf("Digite os valores dos angulos: \n");
    scanf("%f %f %f", &a1, &a2, &a3);

    // condicional e imprimindo qual triangulo é
    if((a1 + a2 + a3) != 180){
        printf("Valores Invalidos! \n");
    } else if(a1 == 90 || a2 == 90 || a3 == 90){
        printf("Triangulo Retangulo \n");
    } else if (a1 > 90 || a2 > 90 || a3 > 90){
        printf("Triangulo Obstusangulo \n");
    } else if (a1 < 90 && a2 < 90 && a3 < 90) {
        printf("Triangulo Acutangulo \n");
    }
}
