#include <stdio.h>
#include <math.h>
int main(){
    float x, y;
    printf("Введіть значення x,y:\n");
    scanf("%f%f", &x, &y);
    printf("Середнє арифметичне:%f\n", (x+y)/2);
    printf("Середнє геометричне:%f", sqrt(x*y));
    return 0;
}