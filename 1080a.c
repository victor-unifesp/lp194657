#include <stdio.h>

int main()
{
    int i=0, maior=-1, v, aux;
    for(i=0;i<100;i++){
        scanf("%d", &aux);
        if (aux>maior){
            maior=aux;
            v=i+1;
        }
    }
    printf("%d\n%d\n", maior, v);
}
