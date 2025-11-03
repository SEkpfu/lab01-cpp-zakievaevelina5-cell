#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c,m,x,y,z,f,g;
    cout << "Pervoe chislo: ";
    cin >> a;
    cout << "Vtoroe chislo: ";
    cin >> b;
    cout << "Tretie chislo: ";
    cin >> c;
    m = min({a,b,c});
    ((m>10)?cout << 2*a << endl << 2*b << endl << 2*c:cout << a+b+c << endl << a*b*c);
    return 0;
    
}