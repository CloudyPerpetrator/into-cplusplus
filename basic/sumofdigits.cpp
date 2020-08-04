#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a;
    cout << "enter  a four digit intiger:" << endl;
    cin >> a;

    int p;
    p = (a % 10);

    int q;
    q = (a % 100)/10;

    int r;
    r = (a %  1000)/100;

    int s;
    s = (a % 10000)/1000;

    cout << "the sum of the digits of the four digit number is:" << p+q+r+s << endl;

    return 0;

    
}