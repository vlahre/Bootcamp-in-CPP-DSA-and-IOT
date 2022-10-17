#include <iostream>
using namespace std;

int main(){
    int x, y;    
    cout << "Enter the first number ";
    cin >> x;
    cout << "Enter the second number ";
    cin >> y;
    
    if (x > y){
        cout << x << " is greater than " << y;
    }
    else if (y > x){
        cout << y << " is greater than " << x;
    }
    else{
        cout << "Both are equal";
    }
    return 0;
}