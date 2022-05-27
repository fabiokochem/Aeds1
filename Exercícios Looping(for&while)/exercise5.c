// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre
// o sal�rio e n�mero de filhos de cada habitante. A prefeitura deseja saber:
// a) m�dia do sal�rio da popula��o;
// b) m�dia do n�mero de filhos;
// c) maior sal�rio;
// d) percentual de pessoas com sal�rio at� R$100,00.
// O final da leitura de dados se dar� com a entrada de um sal�rio negativo.


#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario = 0, salario_total = 0, maior_salario = 0, salario_100 = 0;
    int filhos = 0, total_hab = 0, total_filhos = 0;

    while(1){
        printf("Digite seu salario: \n");
        scanf("%f", &salario);
        if(salario < 0){
            break;
        }
        printf("Digite quantos filhos voce tem: \n");
        scanf("%f", &filhos);

        salario_total += salario;
        total_hab++;
        total_filhos += filhos;

        if(salario > maior_salario){
            maior_salario = salario;
        }

        if(salario < 100){
            salario_100++;
        }
    }

    printf("A media do salario da populacao eh: %.2f \n", salario_total / total_hab);
    printf("A media do numero de filhos eh: %.2f \n", total_filhos / total_hab);
    printf("O maior salario eh: %.2f \n", maior_salario);
    printf("o percentual de pessoas com salario ate R$100.00 eh: %.2f \n", salario_100 / 100);
}
