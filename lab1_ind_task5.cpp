#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
    double x, y, a, b;
    cout << "Vvedite x: ";
    cin >> x;
    cout << "Vvedite y: ";
    cin >> y;
    a= (1+sin(sqrt(x+1))) / cos(12*y-4);
    b= exp(x) -x - 2 + pow((1+x), x);

    cout << fixed << setprecision(5) << "\n+" << a;
    cout << scientific << "\n+" << b;
    return 0;

}