/*
    Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.
*/

#include <stdio.h>
#include <math.h>
//declaração de constantes
//#define PI 3.14

int main(){

    double raio, area;
    //declaração constante
    const double PI = 3.14;

    printf("Digite o valor do raio");
    scanf("%lf", &raio);

    //formula 

    //area = PI*(raio*raio);
    area = (PI*pow(raio,2));
    printf("%.2lf", area);




}