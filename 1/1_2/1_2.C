#include <stdio.h>   // Библиотека ввода-вывода
#include <locale.h>  // Библиотека кириллиц (локализации)
#include <math.h>
void main()
{
    setlocale(LC_CTYPE, "Ru_RU.UTF-8");
    double a,b;
    double c,d;
    printf("Первое число = ");
    scanf("%lf", &a);
    printf("Второе число = ");
    scanf("%lf", &b);
    c=(a*a+b*b) / 2;
    d=(abs(a) + abs(b))/2;
    printf("Cреднее арифметическое  квадратов =%lf\n",c);
    printf("Cреднее арифметическое  модулей =%lf\n",d);
    getchar();  
    getchar();
}