#include <stdio.h>   
#include <locale.h>  
#include <math.h>
void main()
{
 
    setlocale(LC_CTYPE, "Ru_RU.UTF-8");
    int a,b,c;  //оценки
    int d;      //Средний балл

    printf("Введите результаты экзаменов = \n");
    scanf("%d%d%d", &a,&b,&c);

    d=(a+b+c)/3;
    if (d>4)
        printf("Ученик отличник ");
    else if (d=4)
        printf("Ученик хорошист ");
    else if (d=3)
        printf("Ученик троченик ");
    else if (d<3)
        printf("Ученик двоечник ");

    getchar();
    getchar();
}   