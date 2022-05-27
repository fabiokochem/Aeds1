// Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses
// valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é
// o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a
// seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor
// do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o
// tipo de triângulo formado observando as seguintes definições:
//             - Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
//             - Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.
//             - Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
// Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados)
// e para cada triângulo, acione o procedimento

#include <stdio.h>
#define FLAG -99

void reais(int x, int y, int z){
    // condicional para verificar o tipo de triângulo e imprimir na tela
    if(x > y + z || y > x + z || z > x + y){
        printf("Valores inválidos \n");
    } else {
        if(x == y == z){
            printf("Triangulo Equilátero \n");
        } else if (x == y && x != z || x == z && x != y || y == z && y != x){
            printf("Triangulo Isóceles \n");
        } else if (x != y && x != z && y != z){
            printf("Triangulo Escaleno \n");
        }
    }
}

int main(void){
    // declarando variáveis
    int x, y, z;

    // looping que recebe os valores de X, Y e Z
    // FLAG para encerrar o processo, caso a FLAG nao seja chamada, a função reais é executada
    while(1){
        printf("Digite os valores de X, Y e Z: \n");
        scanf("%d %d %d", &x, &y, &z);
        if(x == FLAG || y == FLAG || z == FLAG){
            break;
        } else {
            reais(x, y, z);
        }
        
    }
}