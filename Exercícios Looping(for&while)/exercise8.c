// Em uma eleição presidencial existem quatro candidatos. Os votos são informados através
// de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
// codificação:
// 1,2,3,4 = voto para os respectivos candidatos;
// 5 = voto nulo;
// 6 = voto em branco;
// Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
// - total de votos para cada candidato;
// - total de votos nulos;
// - total de votos em branco.
// Como finalizador do conjunto de votos, tem-se o valor 0.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int voto = 0, cd1 = 0, cd2 = 0, cd3 = 0, cd4 = 0, nulo = 0, branco = 0;

    while(1){
        printf("Digite seu voto: \n");
        scanf("%d", &voto);

        if(voto == 0){
            break;
        } else if (voto == 1){
            cd1++;
        } else if (voto == 2){
            cd2++;
        } else if (voto == 3){
            cd3++;
        } else if (voto == 4){
            cd4++;
        }  else if (voto == 5){
            nulo++;
        } else if (voto == 6){
            branco++;
        } else {
            printf("Voto Invalido \n");
        }
    }

    printf("Total de votos para o candidato 1: %d \n", cd1);
    printf("Total de votos para o candidato 2: %d  \n", cd2);
    printf("Total de votos para o candidato 3: %d  \n", cd3);
    printf("Total de votos para o candidato 4: %d  \n", cd4);
    printf("Total de votos nulos: %d  \n", nulo);
    printf("Total de votos em branco: %d \n", branco);
}
