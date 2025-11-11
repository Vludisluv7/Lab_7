#include <iostream>
using namespace std;

void Get(float& a, float& b, float& h1, float& c, float& d, float& h2);
void Put(float sPos, int nPos);
float RegCikl2(float a, float b, float h1, float c, float d, float h2, int& nPos);

int main()
{
    float a, b, h1, c, d, h2, sPos;
    int nPos;

    Get(a, b, h1, c, d, h2);
    sPos = RegCikl2(a, b, h1, c, d, h2, nPos);
    Put(sPos, nPos);

    system("PAUSE");
    return 0;
}