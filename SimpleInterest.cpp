#include<iostream>
using namespace std;
int main()
{
    float si,p,r,t;
    cout<<"Enter the Principal, Rate and Time for which you wish to calculate the Simple Interest "<<endl;
    cin>>p>>r>>t;
    si = (p*r*t)/100;
    cout<<"The Simple Interest for the given principal will be : "<<si;
    return 0;
}