#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    int n;
    start:
    printf("Введіть ціле значення a, b:\n");
    scanf("%d%d", &a, &b);
    printf("Введіть цифру щоб виконати наступну дію 1.Додавання 2.Віднімання 3.Множення 4.Ділення 5.Вийти з програми\n");
    scanf("%d", &n);
    int sum=a+b;
    int riz=a-b;
    int dob=a*b;
    int dil=a/b;
    switch(n){
        case 1: printf("Результат:%d\n", sum); break;
        case 2: printf("Результат:%d\n", riz); break;
        case 3: printf("Результат:%d\n", dob); break;
        case 4: printf("Результат:%d\n", dil); break;
        case 5: goto end;
        default: printf("Error\n"); break;
    }
    goto start;
    end:
    return 0;
}