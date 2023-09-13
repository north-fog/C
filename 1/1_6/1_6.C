#include <stdio.h>   
#include <locale.h>  
void main()
{
 
    setlocale(LC_CTYPE, "Ru_RU.UTF-8");

    int L1, u, t1, t2, a;
    
    printf("Введите скорость лодки = ");
    scanf("%d", &L1);
    printf("Введите скорость течения,(скорость должа быть меньше чем скорость течения реки) = ");
    scanf("%d", &u);
    printf("Введите сколько часов лодка плыла по реке = ");
    scanf("%d", &t1);
    printf("Введите сколько часов лодка плыла по озеру = ");
    scanf("%d", &t2);
    a=L1*t2+(L1-u)*t1;
    printf("Растояние пути проделаной лодкой = %d\n",a );





    getchar();
    getchar();
}