// Escreva	 um	 programa para ler 3 valores inteiros (considere que não
// serão lidos	valores	iguais)	e escrevê-los em ordem crescente

#include <stdio.h>

int main (){
    // variaveis
    int n1, n2, n3, maior, menor, meio;

    // recebendo os 3 numeros
    printf("Primeiro numero: \n");
    scanf("%d", &n1);
    printf("Segundo numero: \n");
    scanf("%d", &n2);
    printf("Terceiro numero: \n");
    scanf("%d", &n3);

    // condicional
    if(n1 > n2 && n1 > n3){
        maior = n1;
        if( n2 > n3){
            meio = n2;
            menor = n3;
        } else {
            meio = n3;
            menor = n2;
        }
    } else if ( n2 > n1 && n2 > n3){
        maior = n2;
        if(n1 > n3){
            meio = n1;
            menor = n3;
        } else {
            meio = n3;
            menor = n1;
        }
    } else if (n3 > n1 && n3 > n2){
        maior = n3;
        if(n1 > n2){
            meio = n1;
            menor = n2;
        } else {
            meio = n2;
            menor = n1;
        }
    }

    // imprimindo em ordem crescente
    printf("%d %d %d", menor, meio, maior);
}
