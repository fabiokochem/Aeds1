// Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse nadador de acordo com a tabela abaixo.
// Idade (anos)    Categoria
//   5 a 7            F
//   8 a 10           E
//   11 a 13          D
//   14 a 15          C
//   16 a 17          B
// Acima de 18        A
// Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela função

#include <stdio.h>

char categoria(int idade){
    // condicional que define categoria e retorna a mesma
    if(idade >= 5 && idade <= 7){
        return 'F';
    } else if (idade >= 8 && idade <= 10){
        return 'E';
    } else if (idade >= 11 && idade <= 13){
        return 'D';
    } else if (idade >= 14 && idade <= 15){
        return 'C';
    } else if (idade >= 16 && idade <= 17){
        return 'B';
    } else {
        return 'A';
    }
}

int main(){
    // variaveis
    int idade;

    // recebendo idade do usuário
    printf("Digite sua idade \n");
    scanf("%d", &idade);

    // imprimindo a categoria do usuário através da chamada da função categoria
    printf("A sua categoria é: %c \n", categoria(idade));
}