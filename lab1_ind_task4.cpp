#include <iostream>

using namespace std;
int main() 
{
    int x, x15,x5, x2;
    cout << "x= ";
    cin >> x;
    x2=x*x;
    x5=x2*x2*x;
    x15=x5*x5*x5;
    cout << "y= " << x15 - x5 + x2 - 2;
return 0;
}