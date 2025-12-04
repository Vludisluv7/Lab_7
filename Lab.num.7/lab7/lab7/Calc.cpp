#include <iostream>
#include <cmath>
using namespace std;

float func(float x)
{
    return pow(x, 3) - 6 * pow(x, 2) + 9 * x + 4;
}

float RegCikl(float a, float b, float h, float& yMax)
{
    int n = int((b + h / 2 - a) / h) + 1;
    yMax = -1E38;
    float x, y;

    cout << endl << "Таблица значений функции" << endl;
    cout << "\tx\ty" << endl;

    for (int i = 1; i <= n; i++)
    {
        x = a + (i - 1) * h;
        y = func(x);
        if (y > yMax) yMax = y;
        cout << "\t" << x << "\t" << y << endl;
    }
    return yMax;

}
