// Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele
// comercializa. Para isto, mandou digitar uma linha para cada mercadoria com o preço de
// compra e de venda de cada uma. A última linha contém preço de compra igual a 0.
// Escreva um programa que:
// a) Determine e escreva quantas mercadorias proporcionaram:
// i) Lucro < 10%
// ii) 10% <= lucro <= 20%
// iii) Lucro > 20%
// b) Determine e escreva o valor total de compra e de venda de todas as mercadorias,
// assim como o lucro total.


#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco_compra = 0, preco_venda = 0, lucro = 0, resul = 0, total_compra = 0, total_venda = 0, lucro_total = 0;
    int lucro10 = 0, lucro10a20 = 0, lucro_mais20 = 0;

    while(1){
        printf("Digite o preco de compra: \n");
        scanf("%f", &preco_compra);
        if(preco_compra == 0){
            break;
        }
        printf("Digite o preco de venda: \n");
        scanf("%f", &preco_venda);

        resul = 100 * (preco_venda - preco_compra) / preco_compra;

        if(resul < 10){
            lucro10++;
        }
        if (resul > 10 && resul < 20){
            lucro10a20++;
        }
        if (resul > 20){
            lucro_mais20++;
        }

        total_compra += preco_compra;
        total_venda += preco_venda;
        lucro_total += preco_venda - preco_compra;
    }

    printf("%d mercadorias renderam menos de 10 por cento de lucro\n", lucro10);
    printf("%d mercadorias renderam entre 10 por cento e 20 por cento de lucro\n", lucro10a20);
    printf("%d mercadorias renderam mais de 20 por cento de lucro\n", lucro_mais20);
    printf("O valor total de compra foi de: %.2f\n", total_compra);
    printf("O valor total de venda foi de: %.2f\n", total_venda);
    printf("O valor total foi de: %.2f\n", lucro_total);
}

