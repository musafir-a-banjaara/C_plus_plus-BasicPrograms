#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the First Number : "; 
    cin>>a; 
    cout<<"Enter the Second Number : "; 
    cin>>b;
    cout<<"Enter the Third Number : "; 
    cin>>c;
    if(a>=b && a>=c)
    cout<<"The largest of the 3 Numbers is : "<<a;
    else if(b>=a && b>=c)
    cout<<"The largest of the 3 Numbers is : "<<b;
    else
    cout<<"The largest of the 3 Numbers is : "<<c;
    return 0;
}