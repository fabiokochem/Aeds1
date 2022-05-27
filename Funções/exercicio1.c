// Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a
// letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se
// for ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que
// leia 3 notas de N alunos e acione o procedimento para cada aluno. (N deve ser lido do
//teclado)

#include <stdio.h>

void procedimento(float n1, float n2, float n3, char letra)
{
    // condicional de opções(A ou P)
    // imprime o resultado dos calculos de acordo com a opção escolhida
    if(letra == 'A'){
        float aritmetica;
        aritmetica = (n1 + n2 + n3) / 3;
        printf("Media aritmetica: %.2f \n", aritmetica);
    } else if (letra == 'P'){
        float ponderada;
        ponderada = (5 * n1 + 3 * n2 + 2 * n1) / 10;
        printf("Media ponderada: %.2f \n", ponderada);
    }
}

int main(){
    // declarando variáveis
    int n = 0;
    float n1 = 0, n2 = 0, n3 = 0, aritmetica, ponderada;
    char letra = 0;

    // recebendo a qtd de alunos 
    printf("Digite a quantidade de alunos que receberão notas: \n");
    scanf("%d", &n);

    // looping que chama a função procedimento
    for(int i = 0; i < n; i++){
        printf("Digite a nota 1, nota 2, nota 3 e letra(A ou P) desse aluno: \n");
        scanf("%f %f %f %c", &n1, &n2, &n3, &letra);
        
        procedimento(n1, n2, n3, letra);
    }
}