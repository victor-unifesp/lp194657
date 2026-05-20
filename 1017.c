/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1017
Exercício   : 1017
Data        : 19/05/2026
Objetivo    : calcular a gasolina necessaria para se gastar em um percurso
Aprendizado : uso de funções
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int tempo, int velocidade){
    int aux = tempo * velocidade;
    return aux/12.0;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    float z = calcularLitros(x, y);
    printf("%.3f\n", z);

    return 0;
}
