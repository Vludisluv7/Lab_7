#include <iostream>
using namespace std;

void Get(float& a, float& b, float& h)
{
    cout << "Введите нижнюю границу отрезка: ";
    cin >> a;
    cout << "Введите верхнюю границу отрезка: ";
    cin >> b;
    cout << "Введите шаг таблицы: ";
    cin >> h;
}

void Put(float yMax)
{
    cout << endl << "Наибольшее значение функции: " << yMax << endl;

}
