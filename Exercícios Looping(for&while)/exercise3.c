// Fa�a um programa que receba dez n�meros e verifique se eles s�o divis�veis por 3 e 9 (ao
// mesmo tempo), por 2 e por 5. Caso algum n�mero n�o seja divis�vel por nenhum desses
// n�meros mostre a mensagem �N�mero n�o � divis�vel pelos valores�. Apresente tamb�m
// ao final a quantidade de n�meros divis�veis por 3 e 9, por 2 e por 5.

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
