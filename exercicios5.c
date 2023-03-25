/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias*/


#include <stdio.h>

int main(){

    int meses, dias, anos, diasVida;

    printf("Quantos dias de vida você já viveu? Vamos calcular?\n");
    printf("Digite sua idade em anos\n");
    scanf("%d",&anos);
    printf("Digite sua idade em meses\n");
    scanf("%d",&meses);
    printf("Digite sua idade em dias\n");
    scanf("%d",&dias);

    diasVida = (anos * 365) + (meses * 30) + dias;

    printf("legal , você vive a %d dias", diasVida);

}