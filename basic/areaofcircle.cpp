#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int r;
    cout << "enter the radius of the circle:" << endl;
    cin >> r;

    double pi = 3.14;
   
    cout << "Area of the circle is: " << pi*(pow(r, 2)) << endl;

    return 0;
}