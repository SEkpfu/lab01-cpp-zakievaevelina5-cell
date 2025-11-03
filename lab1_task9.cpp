#include <iostream>

using namespace std;
int main () 
{
    int n, h, m, s;
    cout << "n= ";
    cin >> n;
    h= n/3600.0;
    m=n%3600/60;
    s=n%60;
    cout << " hours= " << h;
    cout << " minutes= " << m;
    cout << " seconds= " << s;
return 0;
}