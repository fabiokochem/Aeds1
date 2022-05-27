// Explique cada uma das expressões a seguir, indicando a diferença entre elas:
// p++;       (*p)++;        *(p++);

#include <stdio.h>

int main(void){
    int *p = NULL;

    // adiciona 1 ao endereço que o ponteiro referencia
    p++;

    // adiciona 1 ao valor do ponteiro
    (*p)++;

    // atribui o valor do endereço inicial que o ponteiro referencia adicionado a 1
    *(p++);
}