#include <iostream>
using namespace std;

void Get(float& a, float& b, float& h);
void Put(float yMax);
float RegCikl(float a, float b, float h, float& yMax);

int main(){
    setlocale(LC_ALL, "rus");
    float a, b, h, yMax;

    Get(a, b, h);
    RegCikl(a, b, h, yMax);
    Put(yMax);

    system("PAUSE");
    return 0;
}