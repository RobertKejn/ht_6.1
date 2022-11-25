#include <Windows.h>
#include <iostream>
#include "math_functions.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 0; int b = 0; int c = 0;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> c;
    switch (c) {
    case 1: std::cout << a << " + " << b << " = " << Summ(a, b); break;
    case 2: std::cout << a << " - " << b << " = " << Subtr(a, b); break;
    case 3: std::cout << a << " * " << b << " = " << Mult(a, b); break;
    case 4: std::cout << a << " / " << b << " = " << Div(a, b); break;
    case 5: std::cout << a << " ^ " << b << " = " << Pow(a, b); break;
    default: std::cout << "Команда не распознана"; break;
    }
}
