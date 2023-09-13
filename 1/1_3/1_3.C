#include <stdio.h>   
#include <locale.h>  
#include <math.h>
void main()
{
    setlocale(LC_CTYPE, "Ru_RU.UTF-8");
    
    double a,c;
    {
        printf("12344\t");
    }
    printf("Введите длину окружности = ");
    scanf("%lf", &a);
    c=(a*a)/(4*3.14);
    printf("Площадь круга=%lf",c);
    getchar();
    getchar();

}