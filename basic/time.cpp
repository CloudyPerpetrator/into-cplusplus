#include <iostream>

using namespace std;

int main() {

    int a;
    cout << "enter time in seconds" << endl;
    cin >> a;

    int h = a / 3600;
    a = a % 3600;

    int m = a / 60;

    int s = a % 60;

    cout << "hours:" << h << endl;
    cout << "minutes:" << m << endl;
    cout << "seconds:" << s << endl;

    return 0;

}
