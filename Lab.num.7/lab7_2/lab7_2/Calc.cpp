#include <iostream>
#include <cmath>
using namespace std;

float f(float x, float y)
{
    return pow(x, 2) - 5 * pow(x, 3) + 9 * x + 1.987 - y;
}

float RegCikl2(float a, float b, float h1, float c, float d, float h2, int& nPos)
{
    setlocale(LC_ALL, "rus");
    int n1 = int((b + h1 / 2 - a) / h1) + 1;
    int n2 = int((d + h2 / 2 - c) / h2) + 1;
    float sPos = 0.0;
    nPos = 0;
    float x, y, z;

    cout << endl << "Таблица значений функции" << endl;
    cout << "\tx\ty\tz" << endl;

    for (int i = 1; i <= n1; i++)
    {   
        x = a + (i - 1) * h1;
        for (int j = 1; j <= n2; j++)
        {
            y = c + (j - 1) * h2;
            z = f(x, y);
            if (z > 0) {
                sPos += z;
                nPos++;
            }
            cout << "\t" << x << "\t" << y << "\t" << z << endl;
        }
    }
    return sPos;

}
