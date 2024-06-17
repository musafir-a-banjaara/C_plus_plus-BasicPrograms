#include<iostream>
using namespace std;
int main()
{
    float x;
    cout<<"Enter the Float Number whose Fractional Part you want to print : ";
    cin>>x;
    float y = x - (int)x;
    if(x<0) y += 1;
    cout<<"The Fractional Part is : "<< y ;       //Explicit Typecasting
    return 0;
}