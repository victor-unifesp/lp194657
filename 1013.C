#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    
    scanf("%d %d %d", &A, &B, &C);
    
    if(A>B && A>C){
        printf("%d eh o maior\n", A);
    }
    else if (B>C){
    printf("%d eh o maior\n", B);
    }
    else{
    printf("%d eh o maior\n", C);
    }
    
   
}
