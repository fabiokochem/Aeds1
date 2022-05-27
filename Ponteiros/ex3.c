// Escreva um programa em C que declare variáveis para armazenar um valor inteiro, um valor real e um caracter. Deve existir no programa ponteiros associados a cada um deles. O programa deve solicitar novos dados para as variáveis e elas devem ser modificadas usando os respectivos ponteiros. Exiba os endereços e os conteúdos de todas as variáveis e ponteiros antes e após a alteração.

#include <stdio.h>

int main(void){
    // variaveis
    int x = 5, *ptrx = &x;
    float y = 5.5, *ptry = &y;
    char z = 'F', *ptrz = &z;

    // imprimindo endereço e valores antigos
    printf("Endereço de X: %d | Conteúdo de X: %d | Endereço do ptr: %d | conteúdo do ptr: %d \n", &x, x, ptrx, *ptrx);

    printf("Endereço de Y: %d | Conteúdo de Y: %.2f | Endereço do ptr: %d | conteúdo do ptr: %.2f \n", &y, y, ptry, *ptry);

    printf("Endereço de Z: %d | Conteúdo de Z: %c | Endereço do ptr: %d | conteúdo do ptr: %c \n\n", &z, z, ptrz, *ptrz);

    // lendo novos valores
    printf("Digite os novos valores: \n");
    scanf("%d %f %c", ptrx, ptry, ptrz);
    
    // imprimindo endereço e novos valores antigos
    printf("\n Endereço de X: %d | Conteúdo de X: %d | Endereço do ptr: %d | conteúdo do ptr: %d \n", &x, x, ptrx, *ptrx);

    printf("Endereço de Y: %d | Conteúdo de Y: %.2f | Endereço do ptr: %d | conteúdo do ptr: %.2f \n", &y, y, ptry, *ptry);

    printf("Endereço de Z: %d | Conteúdo de Z: %c | Endereço do ptr: %d | conteúdo do ptr: %c \n\n", &z, z, ptrz, *ptrz);
}