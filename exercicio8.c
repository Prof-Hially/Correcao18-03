/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.*/

#include <stdio.h>

int main(){

    float salario, comissaoFixa, carrosVendidos, totalVendas, salarioFinal, totalComissaoVendas;
    float comissaoTotalVendas = 0.05;

    printf("Digite o numero de carros vendidos");
    scanf("%f", &carrosVendidos);

    printf("Digite valor total de vendas");
    scanf("%f", &totalVendas);

    printf("Digite o salario do funcionario");
    scanf("%f", &salario);

    printf("Digite o valor da comissão por carro vendido");
    scanf("%f", &comissaoFixa);

    totalComissaoVendas = totalVendas * comissaoTotalVendas;

    salarioFinal = salario +(carrosVendidos * comissaoFixa) + totalComissaoVendas;

    printf("O salario final do funcionario: %.2f", salarioFinal);


}