/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1029
Exercício   : 1029
Data        : 28/05/2026
Objetivo    : achar a sequencia de fibonacci com linguagem recursiva
Aprendizado : uso de linguagem recursiva
-------------------------------------------------------------------------- */
#include <stdio.h>

struct dados{
    int chamados;
    int resultado;
};

typedef struct dados dados;

dados fibonacci(int z){
    dados fib;
    if(z == 0){
        fib.resultado = 0;
        fib.chamados = 1;
        return fib;
    }
    if(z == 1){
        fib.resultado = 1;
        fib.chamados = 1;
        return fib;
    }
    
    dados um = fibonacci(z-1);
    dados dois = fibonacci(z-2);
    
    fib.resultado = um.resultado + dois.resultado;
    fib.chamados = 1 + um.chamados + dois.chamados;
    return fib;
}


int main()
{
    int n, x;
    dados f;
    scanf("%d", &n);
        while(n>0){
            scanf("%d", &x);
            f = fibonacci(x);
            printf("fib(%d) = %d calls = %d\n", x, f.chamados-1, f.resultado);
            n--;
        }
    return 0;
}
