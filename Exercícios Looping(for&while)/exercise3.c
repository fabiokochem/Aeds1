// Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao
// mesmo tempo), por 2 e por 5. Caso algum número não seja divisível por nenhum desses
// números mostre a mensagem “Número não é divisível pelos valores”. Apresente também
// ao final a quantidade de números divisíveis por 3 e 9, por 2 e por 5.

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n = 0, div = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        if(n % 3 == 0 && n % 9 == 0 || n % 2 == 0 || n % 5 == 0){
            div++;
        } else {
            printf("Numero nao eh divisivel pelos valores \n");
        }
    }

    printf("A quantidade de numeros divisiveis pelos valores eh: %d \n", div);
}
