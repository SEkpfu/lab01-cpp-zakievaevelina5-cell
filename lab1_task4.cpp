#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double r;
    const double PI = 3.14159;

    cout << "Vvedite r: " << "\nr = ";
    cin >> r;
    cout << "V = " << (4/3)*PI*r*r*r;
    return 0;
}