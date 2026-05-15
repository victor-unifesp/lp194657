/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1015
Exercício   : 1015
Data        : 15/05/2026
Objetivo    : achar a distância de duas coordenadas
Aprendizado : uso de funçôes e struct
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

struct coordenadas{
    double x;
    double y;
};

typedef struct coordenadas coordenadas;

float CalculoDist( coordenadas *p1, coordenadas *p2) {
    double dx = p2->x - p1->x;
    double dy = p2->y - p1->y;
    return sqrt(dx*dx+dy*dy);
}

int main(){
    coordenadas p1, p2;
    float dist;
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
    dist = CalculoDist(&p1, &p2);
    printf("%.4lf\n", dist);
}
