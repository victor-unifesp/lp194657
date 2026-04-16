/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/tournaments/rank/10157
Exercício   : 1071
Data        : 16/04/2026
Objetivo    : somar todos os números primos em um intervalo aberto
Aprendizado : uso do while break e continue
-------------------------------------------------------------------------- */
int main() {
    int a, b , i, soma;
    soma = 0; 
    scanf("%d %d", &a, &b);
    if(a > b){
        i = a;
        a = b;
    }
    else {
        i = b;
    }
    
    while  ( i > a){
        i--;
        if (i<=a){
            break;
        }
        if(i % 2 == 0){
            continue;
        }
        else{
            soma = soma + i; 
        }
    }
    
    printf("%d\n", soma);
    return 0;
}
