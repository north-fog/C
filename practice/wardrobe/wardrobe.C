#include <stdio.h>   // Библиотека ввода-вывода
#include <locale.h>  // Библиотека локализация
#include <math.h>    // Библиотека основных математических функций 
void main()
{
    /*
    Программа берёт данные о высоте, глбуине и ширину шкафа и считает его массу   
    */

    setlocale(LC_CTYPE, "Ru_RU.UTF-8"); //локализация
    
    int d_DVP = 550;    //плотность ДВП
    int d_DSP = 650;    //плотность ДСП
    int d_pine = 520;   //полтность дерева (сосны)
    float height, wide, deep; //Высота, ширина, глуина

    float weight_b_w, weight_s_w, weight_tb_c, weight_d, weight_shelves; //вес частей шкафа
    /*
    weight_b_w    - (weight back wall) вес задней стенки
    weight_s_w    - (weight side wall) Вес боковой стенки
    weight_tb_c   - (weight top and bottom cover) верхняя и нижняя крышка
    weight_d      - (weight door) вес дверей
    weight_shelve - (weight shelve) вес полки
    */

    float final_weight; // Вес всего шкафа

    //Ввод данных
    printf("Введите высоту шкафа от 180 до 240 см: ");
    scanf("%f", &height);
    printf("\nВведите ширину шкафа от 80 до 120 см: ");
    scanf("%f", &wide);
    printf("\nВведите ширину глубину от 50 до 90 см: ");
    scanf("%f", &deep);
    
    // Перевод из сантиметров в метры 
    height = height/100;    // Высота
    wide = wide / 100;      // Ширина
    deep = deep / 100;      // Глубина
    
    // Рассчёт веса деталей
    weight_b_w = (height * wide  * 0.005)*d_DVP;    // Вес задней стенки
    weight_s_w =(( height * deep * 0.015)*d_DSP)*2; // Вес боковых стенок   
    weight_tb_c =(( wide * deep * 0.015)*d_DSP)*2;  // Вес верхней и нижней крышки 
    weight_d =(height * wide  * 0.015)*d_pine;      // Вес дверей 
    weight_shelves =( wide * deep * 0.015)*d_DSP;   // Вес одной полки

    // Рассчёт веса всего шкафа
    final_weight = weight_b_w + weight_s_w + weight_tb_c + weight_d +(trunc(height/40))*weight_shelves;
    
    final_weight = (round(final_weight));   // Округление  веса до целых килограмм

    // Вывод данных
    printf("\nВес шкафа равен: %f",final_weight);

    //остановка программы до ввода любого символа
    getchar();  
    getchar();
}