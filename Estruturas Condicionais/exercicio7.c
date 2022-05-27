//Escreva um programa para ler o número	de	lados de um	polígono regular
//e a	medida do lado (em cm). Calcular e imprimir	o seguinte:
//− Se o número de lados for igual a 3 escrever TRIÂNGULO	e o	valor da área.
//− Se o número de lados for igual a 4 escrever QUADRADO e o valor da	sua	área.
//− Se o número de lados for igual a 5 escrever PENTÁGONO.

#include <stdio.h>
#include <math.h>

int main (){
    // variaveis
    int qtdlados = 0;
    float medida = 0, area = 0, potencia = 0, raiz = 0;
    char poligono = 0;

    // recebendo a qtd de lados e a medida de cada lado
    printf("Digite a quantidade de lados do poligono: \n");
    scanf("%d", &qtdlados);
    printf("Digite a medida de cada lado do poligono: \n");
    scanf("%f", &medida);

    // condicional
    if(qtdlados == 3){
        poligono = 'Triangulo';
        potencia = pow(medida,2);
        raiz = sqrt(3);
        area = (potencia * raiz) / 4;
    } else if (qtdlados == 4){
        poligono = 'Quadrado';
        area = medida * medida;
    } else if (qtdlados == 5){
        poligono = 'Pentagono';
        area = (5 * medida) * (medida / 1.4);
    }

    // imprimindo info poligonos
    printf("O poligono eh um %c e sua area eh: %.2f \n", poligono, area);
}
