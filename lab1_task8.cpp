#include <iostream>

using namespace std;
int main () 
{
    int a, b;
    cout << "a= ";
    cin >> a;
    b= a%10;
    a=(a-a%10) /10;
    a=(a-a%10) /10;
    a=(a-a%10) /10;
    cout << "pervaya = " << a;
    cout << "\nposlednaya = " << b;
return 0;
}