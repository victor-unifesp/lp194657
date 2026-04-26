https://judge.beecrowd.com/en/problems/view/1253
#include <stdio.h>
#include <string.h>

int main(){
    int a, b, c, d, e;
    char t[51];
    scanf("%d", &b);
    getchar();
    while(b>0){
        scanf("%50[^\n]a", t);
        scanf("%d", &a);
        getchar();
        d = strlen(t);
        for(c=0; c<d; c++){
            e = t[c]-a;
            if (e<65){
                t[c]=e+26;
            } else{
                t[c]=e;
            }
            
        }
        printf("%s\n", t);
        b--;
    }
}
