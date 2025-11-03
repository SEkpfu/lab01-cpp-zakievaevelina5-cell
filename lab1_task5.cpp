#define _USE_MATH_DEFINES 

#include <iostream> 
#include <cmath>

using namespace std; 

int main() 
{ 
    double radius, length, area;     
    cout << "Vvedite ploschad: S = ";       
    cin >> area;     
    radius = sqrt(area / M_PI);    
    length = 2.0 * M_PI * radius;    
    cout << "r = " << radius << endl;
    cout << "l = " << length;  
    return 0;
}