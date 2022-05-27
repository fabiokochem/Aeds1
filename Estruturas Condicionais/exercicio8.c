//Acrescente as seguintes mensagens à solução do exercício anterior conforme o caso.
//− Caso o número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO.
// Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.

#include <stdio.h>
#include <math.h>

int main (){
    // variaveis
    int qtdlados = 0;
    float medida = 0, area = 0, potencia = 0, raiz = 0;
    char poligono = 0;

    // recebendo valores
    printf("Digite a quantidade de lados do poligono: \n");
    scanf("%d", &qtdlados);
    printf("Digite a medida de cada lado do poligono: \n");
    scanf("%f", &medida);

    // condicional e imprimindo dos valores
    if(qtdlados < 3){
        printf("NAO EH UM POLIGONO \n");
    } else if(qtdlados == 3){
        poligono = 'Triangulo';
        potencia = pow(medida,2);
        raiz = sqrt(3);
        area = (potencia * raiz) / 4;
        printf("O poligono eh um %c e sua area eh: %.2f \n", poligono, area);
    } else if (qtdlados == 4){
        poligono = 'Quadrado';
        area = medida * medida;
        printf("O poligono eh um %c e sua area eh: %.2f \n", poligono, area);
    } else if (qtdlados == 5){
        poligono = 'Pentagono';
        area = (5 * medida) * (medida / 1.4);
        printf("O poligono eh um %c e sua area eh: %.2f \n", poligono, area);
    } else {
        printf("POLIGONO NAO IDENTIFICADO \n");
    }
}
