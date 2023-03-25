/*Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede. O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta serão necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.*/

#include <stdio.h>
#include <math.h>

int main(){

    double largura, altura, area, totalTinta;

    printf("Digite a largura da parede");
    scanf("%lf",&largura);
    printf("Digite a altura da parede");
    scanf("%lf",&altura);

    area = largura * altura;

    printf("%.2lf\n", area);

    //Calcular quantas latas de tinta serao necessarias
    //1 lata pinta 6.66 metros quadrados

    totalTinta = area/6.66;

    printf("%.2lf\n", totalTinta);

    double quantidadeFinal = ceil(totalTinta);

    printf("%.2lf\n", quantidadeFinal);
   
}