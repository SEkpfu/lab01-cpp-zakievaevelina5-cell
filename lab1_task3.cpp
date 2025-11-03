#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double tC;
    cout << "Vvedite tC:  \n";

    cout << "tC= ";
    cin >> tC;

    cout << "tF = " << (9/5)*tC +32;
    cout << "\ntK = " << tC + 273;
    return 0;
}