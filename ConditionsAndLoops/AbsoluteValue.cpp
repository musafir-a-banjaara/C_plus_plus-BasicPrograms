#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Integer whose absolute value you want to print : ";
    cin>>n;
    if(n>=0)
    cout<<"The Absolute Value is : "<<n;
    else
    cout<<"The Absolute Value is : "<<-n;
    return 0;
}