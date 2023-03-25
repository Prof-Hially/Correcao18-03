/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.*/

#include <stdio.h>

int main(){

    float custoFabrica;
    float porcentagemDistribuidor = 0.28;
    float impostos = 0.45;
    float custoFinal;

    printf("Digite o custo de fábrica do carro\n");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica + (custoFabrica * porcentagemDistribuidor) + (custoFabrica * impostos);

    printf("%.2f", custoFinal);

}