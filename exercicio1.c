/*comentário em bloco

1 - Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado).Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria
*/

#include <stdio.h>

int main(){

        float custo, frete, despesas, valorVenda, totalBruto, porcentagemLucro, lucro;

        printf("Digite o custo da mercadoria");
        scanf("%f",&custo);

        printf("Digite o valor do frete");
        scanf("%f", &frete);

        printf("Digite o valor das despesas");
        scanf("%f", &despesas);

        totalBruto = custo + frete + despesas;

        printf("O valor bruto do produto é: R$ %.2f \n. Adicione o valor valor da venda", totalBruto);
        scanf("%f",&valorVenda);

        lucro = valorVenda-totalBruto;

        porcentagemLucro = (lucro/totalBruto)*100;

        printf("A porcentagem de venda do produto e: %.1f %%",porcentagemLucro);








    return 0;
}



