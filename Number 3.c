#include <stdio.h>
#include <math.h>
int main(){
    int i, n;
    double sum=0.0;
    printf("input n:\n");
    scanf("%d", &n);
    double term=pow(2, i);
    for(i=1; i <= n; i++){
        term=pow(2, i);
        sum+=term;
        printf("2 в степені %d=%g\n", i, term);
    }
    printf("suma=%g", sum);
    
    return 0;
}