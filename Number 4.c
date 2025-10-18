#include <stdio.h>
int main(){
    int n;
    char name[15], surname[20], phone_number[20], country[30], mail[30];
    printf("Вам потрібно пройти реєстрацію введіть свої данні\n");
    printf("Введіть своє ім'я\n");
    scanf("%14s", name);
    printf("Введіть своє прізвище\n");
    scanf("%19s", surname);
    printf("Введіть свій номер телефону\n");
    scanf("%19s", phone_number);
    printf("Введіть країну проживання\n");
    scanf("%29s", country);
    printf("Введіть свою електронну пошту\n");
    scanf("%29s", mail);
    printf("Реєстрація пройшла успішно виберіть опцію\n");
    while(1){
    printf("1.Ім'я 2.Прізвище 3.Номер телефону 4.Країну проживання 5.Електронну пошту 6.Вийти з програми:\n");
    printf("Ваш вибір:\n");
    scanf("%d", &n);
    switch(n){
        case 1: printf("Ваше Ім'я:%s\n", name); break;
        case 2: printf("Ваше прізвище:%s\n", surname); break;
        case 3: printf("Ваш номер телефону:%s\n", phone_number); break;
        case 4: printf("Ваша країна проживання:%s\n", country); break;
        case 5: printf("Ваша електронна пошта:%s\n", mail); break;
        case 6: return 0;
        default: printf("Невірний вибір спробуйте ще раз\n"); break;
    }
    }
    return 0;
}