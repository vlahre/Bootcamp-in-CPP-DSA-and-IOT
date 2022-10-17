#include<iostream>
using namespace std;
void largest(int);

int main ()
{
    int num;
    cout<<"Enter the Number :";
    cin>>num;

   
    return 0;
}

void largest(int num){
    int remider, Largest= 0;
    while (num > 0)
    {
        remider = num % 10;
        if (Largest < remider)
        {
            Largest = remider;
        }
        num = num / 10;
    }
    cout<<"The Largest Digit is "<< Largest;
}