#include <stdio.h>   // Библиотека ввода-вывода
#include <locale.h>  // Библиотека кириллиц (локализации)
#include <math.h>
int main()
{
	setlocale(LC_CTYPE, "Ru_RU.UTF-8"); // использование кириллиц

	// Описание данных
	double a, b; // Исходные данные
	// Требуемый результат:
	double c, d, e;
    double g;

	// Ввод значений исходных данных:
	printf("Первое число = ");
	scanf("%lf", &a);
	printf("Второе число = ");
	scanf("%lf", &b);

	// Выполнение расчета:
	c = a + b;
    d=a-b;
    e=a*b;
    g = a / b;



	// вывод результата:
	printf("Сумма = %lf\n", c);
    printf("разность= %lf\n",d);
    printf("произведение=%lf0\n",e);
    printf("Частное=%lf\n",g);

	getchar();  // Останов программы до ввода любого символа
	getchar(); 
	return 0;
}