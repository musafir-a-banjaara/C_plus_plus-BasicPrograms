#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the sides measure "<<endl;
    cout<<"Enter the first side : "; cin>>a;
    cout<<"Enter the second side : "; cin>>b;
    cout<<"Enter the third side : "; cin>>c;
    if(a+b>c && b+c>a && c+a>b)
    cout<<"We have a Valid Triangle for the given sides ";
    else
    cout<<"Triangle cannot be formed from the given sides ";
    return 0;
}