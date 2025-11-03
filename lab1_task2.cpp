#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double a, b;
    cout << "Vvedite chisla:  \n";

    cout << "a= ";    
    cin >> a;     
    cout << "b= ";    
    cin >> b;
    cout << "a+b = " << a+b;
    cout << "\na-b = " << a-b;
    cout << "\na/b = " << a/b;

    return 0;
}