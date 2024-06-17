#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the Integer whose exact Half you want : ";
    cin>>x;
    float y = x;                            //Implicit Typecasting
    cout<<"Half of the Integer entered is : "<<y/2;
    return 0;
}