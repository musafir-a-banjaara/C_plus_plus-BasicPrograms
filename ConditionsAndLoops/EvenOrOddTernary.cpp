#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you want to check : ";
    cin>>n;
    cout<<"The Number you Entered "<<n<<" is ";
    n%2==0 ? cout<<"Even Number" : cout<<"Odd Number" ;
    return 0;
}