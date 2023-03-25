/*
    Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

*/

#include <stdio.h>

int main(){

    double salario, aumento, porcentagem, novoSalario;

    printf("Digite seu salario atual");
    scanf("%lf", &salario);

    printf("Digite o percentual de aumento atual");
    scanf("%lf", &aumento);

    porcentagem = aumento/100;

    novoSalario = salario +(salario * porcentagem);

    printf("%.2lf", novoSalario);


    

}
