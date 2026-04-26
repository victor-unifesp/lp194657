/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/2758
Exercício   : 2758
Data        : 11/04/2026
Objetivo    : escrever números de diferentes modos
Aprendizado : definir quantidade de casas decimais e usar notação científica
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    float a, b;
    double c, d;
    scanf("%f %f", &a, &b);
    scanf("%lf %lf", &c, &d);
    printf("A = %f, B = %f\n", a, b);
    printf("C = %lf, D = %lf\n", c, d);
    printf("A = %.1f, B = %.1f\n", a, b);
    printf("C = %.1lf, D = %.1lf\n", c, d);
    printf("A = %.2f, B = %.2f\n", a, b);
    printf("C = %.2lf, D = %.2lf\n", c, d);
    printf("A = %.3f, B = %.3f\n", a, b);
    printf("C = %.3lf, D = %.3lf\n", c, d);
    printf("A = %.3E, B = %.3E\n", a, b);
    printf("C = %.3E, D = %.3E\n", c, d);
    printf("A = %0.f, B = %0.f\n", a, b);
    printf("C = %0.lf, D = %0.lf\n", c, d);
    return 0;
}
