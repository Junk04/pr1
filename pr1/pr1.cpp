#include <stdio.h>
#include <windows.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

//Функция для вычисления длины числа 
int len_int(int num)
{
    int length = 0;

    while (num != 0)
    {
        num /= 10;
        length++;
    }
    return length;
}


using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);

    int wigth = 89;
    string Name1;
    string Name2;
    string Name3;
    string maker1;
    string maker2;
    string maker3;
    unsigned int count1;
    unsigned int count2;
    unsigned int count3;
    unsigned int price1;
    unsigned int price2;
    unsigned int price3;
    string descr = "возможно бесплатно получить продукт StarOffice через Internet";

    /* Office Microsoft 4 87
     SmartSute Lotus 5 1020
     StarOffice Sun 4 9
     */

    char tmp1[32];
    char tmp2[32];
    printf("1.Введите наименование, производителя, количество сост.частей, цену ($)\n");
    scanf_s("%s %s %u %u", tmp1, sizeof(tmp1), tmp2, sizeof(tmp2), &count1, &price1);
    Name1 = tmp1;
    maker1 = tmp2;


    printf("2.Введите наименование, производителя, количество сост.частей, цену ($)\n");
    scanf_s("%s %s %u %u", tmp1, sizeof(tmp1), tmp2, sizeof(tmp2), &count2, &price2);
    Name2 = tmp1;
    maker2 = tmp2;

    printf("3.Введите наименование, производителя, количество сост.частей, цену ($)\n");
    scanf_s("%s %s %u %u", tmp1, sizeof(tmp1), tmp2, sizeof(tmp2), &count3, &price3);
    Name3 = tmp1;
    maker3 = tmp2;


    printf("\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");
    printf("|Офисные пакеты                                                                         |\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");
    //                   23                     19              29                         10
    printf("|Наименование           |Производитель         |Количество сост.частей       |Цена ($)  |");
    printf("\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //Строка 1
    printf("|%s", Name1.c_str());
    for (int i = 0; i < 23 - Name1.size(); i++)
        printf(" ");
    printf("|%s", maker1.c_str());
    for (int i = 0; i < 22 - maker1.size(); i++)
        printf(" ");
    printf("|%d", count1);
    for (int i = 0; i < 29 - len_int(count1); i++)
        printf(" ");
    printf("|%d", price1);
    for (int i = 0; i < 10 - len_int(price1); i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //Строка 2
    printf("|%s", Name2.c_str());
    for (int i = 0; i < 23 - Name2.size(); i++)
        printf(" ");
    printf("|%s", maker2.c_str());
    for (int i = 0; i < 22 - maker2.size(); i++)
        printf(" ");
    printf("|%d", count2);
    for (int i = 0; i < 29 - len_int(count2); i++)
        printf(" ");
    printf("|%d", price2);
    for (int i = 0; i < 10 - len_int(price2); i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //Строка 3
    printf("|%s", Name3.c_str());
    for (int i = 0; i < 23 - Name3.size(); i++)
        printf(" ");
    printf("|%s", maker3.c_str());
    for (int i = 0; i < 22 - maker3.size(); i++)
        printf(" ");
    printf("|%d", count3);
    for (int i = 0; i < 29 - len_int(count3); i++)
        printf(" ");
    printf("|%d", price3);
    for (int i = 0; i < 10 - len_int(price3); i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    //descr     12
    printf("|Примечание: %s", descr.c_str());
    for (int i = 0; i < wigth - 14 - descr.size(); i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < wigth; i++)
        printf("-");
    printf("\n");

    return 0;
}