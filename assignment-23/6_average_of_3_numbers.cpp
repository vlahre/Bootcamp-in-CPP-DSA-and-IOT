#include <iostream>
using namespace std;
 
int main() {
   int num1;
   cout << "Enter num1  ";
   cin >> num1;
 
   int num2;
   cout << "Enter num2  ";
   cin >> num2;
 
   int num3;
   cout << "Enter num3  ";
   cin >> num3;
    
   float average = (num1 + num2 + num3) / 3;
   cout << "Average : " << average << endl;
   return 0;
}