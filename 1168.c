/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Victor da Veiga Amaral Lopes
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/en/problems/view/1168
Exercício   : 1168
Data        : 21/05/2026
Objetivo    : fazer a contagem de leds necessarios para fazer n numeros
Aprendizado : uso do switch
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, leds=0;
    char numero[102];
    scanf("%d", &n);
    while(n>0){
        scanf("%s", numero);
        for(i=0;i<strlen(numero);i++){
            switch(numero[i]){
                case '0':
                    leds += 6;
                    break;
                case '1':
                    leds += 2;
                    break;
                case '2':
                    leds += 5;
                    break;
                case '3':
                    leds += 5;
                    break;
                case '4':
                    leds += 4;
                    break;
                case '5':
                    leds += 5;
                    break;
                case '6':
                    leds += 6;
                    break;
                case '7':
                    leds += 3;
                    break;
                case '8':
                    leds += 7;
                    break;
                case '9':
                    leds += 6;
                    break;
            }
        }
        printf("%d leds\n", leds);
        n--;
        leds=0;
    }
}
