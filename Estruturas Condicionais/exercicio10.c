// Escreva um programa que leia as medidas dos lados de um triângulo e
// escreva	se ele é Equilátero, Isósceles ou Escaleno. Sendo que:
// − Triângulo	Equilátero:	possui os 3	lados iguais.
// − Triângulo	Isóscele: possui 2 lados iguais.
// − Triângulo	Escaleno: possui 3 lados diferentes.

#include <stdio.h>

int main (){
    // variaveis
    int n1 = 0, n2 = 0, n3 = 0;

    // recebendo as medidas
    printf("Digite as medidas dos lados do triangulo: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    // condicional e imprimindo qual triangulo é
    if ( n1 == n2 && n1 == n3){
        printf("Triangulo Equilatero \n");
    } else if (n1 == n2 && n1 != n3 || n1 == n3 && n1 != n2 || n2 == n3 && n1 != n2 && n1 != n3){
        printf("Triangulo Isoceles \n");
    } else {
        printf("Triangulo Escaleno \n");
    }

}
