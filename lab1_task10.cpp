#include <iostream>

 using namespace std;
int main() 
{
    int a, b, c, v, s;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    cout << "v= "<< a*b*c;
    cout << "\ns= " << 2*(a*b + b*c + a*c); 
return 0;
}