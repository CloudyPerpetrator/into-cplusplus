 #include <iostream>
 #include <math.h>

 using namespace std;

 int main(){


    int x1,y1;
    cout << "enter x and y co-ordinates of the first object:" << endl;
    cin >> x1;
    cin >> y1;

    int x2,y2;
    cout << "enter x and y co-ordinates of the second object:" << endl;
    cin >> x2;
    cin >> y2;

    cout << "the distance between the two objects is:" << sqrt((x2-x1)^2 + (y2-y1)^2 ) << endl;

    return 0;

 }