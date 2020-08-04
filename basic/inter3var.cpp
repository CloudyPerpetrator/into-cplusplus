#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a;
    cin >> a;

    int b;
    cin >> b;

    int p = b;

     b = a;
     a = p;

    
    cout << a << endl;
    cout << b << endl;

    return 0;
}