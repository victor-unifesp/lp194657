/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1028
Exercício   : 1028
Data        : 26/05/2026
Objetivo    : achar o maior divisor comum
Aprendizado : uso de linguagem recursiva
-------------------------------------------------------------------------- */

int acharmmc (int x, int y){
    int w, aux;
    if(x<y){
        aux=y;
        y=x;
        x=aux;
    }
    
    w = x%y;
    
    if( w==0){
        return y;
    }
    
    return acharmmc(y , w);
}

int main(){
    int n, a ,b, x;
    scanf("%d", &n);
    while(n>0){
        scanf("%d %d", &a, &b);
        x = acharmmc(a, b);
        printf("%d\n",x);
        n--;
    }
    
    return 0;
}
