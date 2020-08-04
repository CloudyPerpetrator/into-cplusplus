#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double a;
    cout << "Enter Distance in Mellimeters(mm):" << endl;
    cin >> a;

    cout << "Distace in centimeters(cm) is" << a/10.00 << endl;
    cout << "Distace in Inches(In) is" << a/25.00 << endl;
    cout << "Distace in Feet(ft) is" << a/250.00 << endl;

    return 0;

}