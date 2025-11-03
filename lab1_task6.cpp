#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r, h,v, s;
    cout << "r= ";
    cin >> r;
    cout << "h= ";
    cin >> h;
    cout << "v= " << M_PI*r*r*h;
    cout << "\ns= " << 2*M_PI*r*r + 2*M_PI*r*h;
return 0;
}