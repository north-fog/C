#include <stdio.h>   
#include <locale.h>  
void main()
{
 
    setlocale(LC_CTYPE, "Ru_RU.UTF-8");
    int v1,v2,s1,t,s2;
    printf("Введите скорость 1 машины = ");
    scanf("%d", &v1);
    printf("Введите скорость 2 машины = ");
    scanf("%d", &v2);
    printf("Введите начальное растояние = ");
    scanf("%d", &s1);
    printf("Введите прошедшее время = ");
    scanf("%d", &t);
    s2=s1+t*v1+t*v2;
    printf("Растояние =%d",s2);
    getchar();  // Останов программы до ввода любого символа
    getchar();
}