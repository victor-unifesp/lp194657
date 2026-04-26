#include <stdio.h>
#include <ctype.h>

int main(){
    int i=0, r=0;
    char t[51];
    while (fgets(t, 51, stdin) != NULL) {
        r=0;
        for(i=0; t[i]!='\0'; i++){
            if(t[i]==' ' || t[i] == '\n' || t[i] == '\r'){
                continue;
            }
                else if(r%2==0){
                        t[i]=toupper(t[i]);
                    }
                else{
                        t[i]=tolower(t[i]);
                    }
                r++;    
        }
        printf("%s", t);
    }
