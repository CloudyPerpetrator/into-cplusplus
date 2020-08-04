#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    cout << "enter temperature in:" << endl;
    cout << "a. Degree Centrigate" << endl;
    cout << "b. Degree Farheight" << endl;  
    
    char temp;
    cin >> temp;

    float c;
    cin >> c;

    if (temp == 'a'){
   
     cout << "tempeature in Farheight is:" << (9.0/5.0)*c+32.0 << endl;
    
    } else {

        cout << "temperature  in  Centigrate is:" << (5.0/9.0)*(c-32.0) << endl;
    }
        


}