// Escreva um programa que verifique a validade de uma determinada senha pelo usu�rio.
// A senha v�lida � o n�mero 1234. Devem ser impressas as seguintes mensagens:
//            ACESSO PERMITIDO se a senha for v�lida.
//            ACESSO NEGADO se a senha for inv�lida.

#include <stdio.h>

int main (){
    // variaveis
    int senha = 1234;
    int verificar;

    // recebendo a senha
    printf("Digite sua senha: \n");
    scanf("%d", &verificar);

    // condicional
    if(verificar == senha){
        printf("ACESSO PERMITIDO! \n");
    } else {
        printf("ACESSO NEGADO! \n");
    }
}
