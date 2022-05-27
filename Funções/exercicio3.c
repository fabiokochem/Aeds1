// Faça um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem
// crescente. Faça um programa que leia N conjuntos de 3 valores e acione o procedimento
// para cada conjunto. (N deve ser lido do teclado)

#include <stdio.h>

void conjuntos(int n1, int n2, int n3){
    // declarando variáveis
    int maior, menor, meio;
    // looping para verificar a ordem crescente
    if(n1 > n2 && n1 > n3){
            maior = n1;
            if (n2 > n3){
                meio = n2;
                menor = n3;
            } else {
                meio = n3;
                menor = n2;
            }
        } else if (n2 > n1 && n2 > n3){
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
    // imprimindo a sequência em ordem crescente
    printf("Sequência crescente: %d %d %d \n", menor, meio, maior);
}

int main(void){
    // declarando variáveis
    int n, n1, n2, n3;
    
    // recebendo a qtd de conjuntos
    printf("Digite a quantidade de conjuntos de 3 valores: \n");
    scanf("%d", &n);

    // looping que chama a função conjuntos
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &n1, &n2, &n3);
        conjuntos(n1, n2, n3);
    }
}