#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number you want to check : ";
    cin>>n;
    if(n%3==0 && n%5==0)
    cout<<"The given number is divisible by both 3 and 5 "<<endl;
    else
    cout<<"The given number is not divisible by both 3 and 5 "<<endl;
    return 0;
}