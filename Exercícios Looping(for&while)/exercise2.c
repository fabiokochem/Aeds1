// Adaptar o programa do exercise1.c para que ele calcule o percentual dos valores positivos,
// negativos e zeros em relação ao total de valores fornecidos.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v = 0, n = 0, pos = 0, neg = 0, zeros = 0;
    float total = 0;

    printf("Digite quantos numeros a sequencia possuira: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite um valor: \n");
        scanf("%d", &v);
        if(v == 0){
            zeros++;
        } else if (v < 0){
            neg++;
        } else {
            pos++;
        }
    }

    total = zeros + pos + neg;

    printf("Sao %d numeros positivos, %d numeros negativos e %d zeros \n", pos, neg, zeros);
    printf("A porcentagem de numeros positivos eh: %.1f \n", pos / total);
    printf("A porcentagem de numeros negativos eh: %.1f \n", neg / total);
    printf("A porcentagem de numeros zeros eh: %.1f \n", zeros / total);
}
