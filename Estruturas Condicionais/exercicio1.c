// Escreva um programa para	ler	2 valores (considere que não serão	informados	valores	iguais)	e escrever
// o maior	deles

#include <stdio.h>

int main (){

    //variaveis
    int v1 = 0;
    int v2 = 0;

    //digitando valores
    printf("Digite o primeiro valor: \n");
    scanf("%d", &v1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &v2);

    //condicional
    if (v1 > v2){
        printf("%d \n ", v1);
    } else {
        printf("%d \n", v2);
    }
}
