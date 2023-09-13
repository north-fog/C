#include <stdio.h>   
#include <locale.h>  
#include <math.h>
void main()
{
 
    setlocale(LC_CTYPE, "Ru_RU.UTF-8");
    int a,b,c;

    printf("Введите длину стороны а = \n");
    scanf("%d", &a);
    printf("Введите длину стороны b = \n");
    scanf("%d", &b);
    printf("Введите длину стороны c = \n");
    scanf("%d", &c);

    if (a==b && a==c)
        printf("трегольник равностороний");
    else if (a!=b && a!=c && b!=c)
        printf("трегольник разностороний");
    else if ((a==b && a!=c)||(b==c && a!=c)||(a==c && a!=b))
        printf("трегольник равнобедреный");



    getchar();
    getchar();
}   