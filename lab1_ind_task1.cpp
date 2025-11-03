#include <iostream>
using namespace std;

int main()
{
    int a,b,x1,y1,x2,y2;
    cout << "Vvedite koordinaty: \n";

    cout << "x1= ";
    cin >> x1;
    cout << "y1= ";
    cin >> y1;

    cout << "Vvedite dliny storon: \n";

    cout << "a(gor)= ";
    cin >> a;
    cout << "b(vert)= ";
    cin >> b;
    cout << "s = " << a*b;
    cout << "\n(x2=" << x1+a;
    cout << ";y2=" << y1-b;
    cout << ")";
    return 0;
}