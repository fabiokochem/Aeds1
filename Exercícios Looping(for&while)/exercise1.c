// Fazer um programa leia uma seq��ncia de valores inteiros fornecida pelo usu�rio em uma
// linha de entrada e conte o n�mero de valores positivos, negativos e zeros.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v = 0, n = 0, pos = 0, neg = 0, zeros = 0;

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

    printf("Sao %d numeros positivos, %d numeros negativos e %d zeros \n", pos, neg, zeros);
}
