#include <stdio.h>   
#include <locale.h>  
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "Ru_RU.UTF-8");

    double a1,a2,b1,b2,c1,c2,ab, bc, ac,p,p2,s;
    printf("Введите первую координату = ");
    scanf("%lf %lf", &a1,&a2);
    printf("Введите вторую координату = ");
    scanf("%lf %lf", &b1,&b2);
    printf("Введите третью координату = ");
    scanf("%lf %lf", &c1,&c2);
    printf("a1=%lf\n",a1);

    ab=sqrt((b1*b1-a1*a1)+(b2*b2-a2*a2));
    bc=sqrt((c1*c1-b1*b1)+(c2*c2-b2*b2));
    ac=sqrt((c1*c1-a1*a1)+(c2*c2-a2*a2));

    p=ab+bc+ac;
    p2=p/2;
    s=sqrt(p2*(p2-ab)*(p2-bc)*(p2-ac));
    printf("Периметр =%lf\n",p);
    printf("Площадь =%lf",s);
	return 0;
}