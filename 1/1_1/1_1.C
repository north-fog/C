#include <stdio.h>   // Библиотека ввода-вывода
#include <locale.h>  // Библиотека кириллиц (локализации)
#include <math.h>    // Библиотека математики 
int main()
{	
	/*
		Программа берет два числа и находит их 
		сумму, разность, произведение и частное
	*/

	setlocale(LC_CTYPE, "Ru_RU.UTF-8"); // использование кириллицы


	double a, b; // Исходные данные
	double c, d, e, g;//выходные данные

	// Ввод значений исходных данных:
	printf("Первое число = ");
	scanf("%lf", &a);
	printf("Второе число = ");
	scanf("%lf", &b);

	// Выполнение расчета:
	c = a + b; 	//посчитаем сумму
    d=a-b;		//посчитаем разность
    e=a*b;		//посчитаем произведение
    g = a / b;	//посчитаем частное

	// вывод результата:
	printf("Сумма = %lf\n", c);
    printf("разность= %lf\n",d);
    printf("произведение=%lf0\n",e);
    printf("Частное=%lf\n",g);

	getchar();  // Остановка программы до ввода любого символа
	getchar(); 
	return 0;
}