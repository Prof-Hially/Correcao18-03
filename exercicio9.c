
/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média final */

#include <stdio.h>

int main(){

    double nota1, nota2, nota3, mediaPonderada;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    mediaPonderada = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/(2 + 3 + 5);

    printf("%lf", mediaPonderada);

}