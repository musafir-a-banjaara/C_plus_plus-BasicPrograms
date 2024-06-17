#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Positive Integer : ";
    cin>>n;
    if(n>99 && n<1000)
    cout<<"You Entered a 3 Digit Number "<<endl;
    else
    cout<<"Not a 3 Digit Number "<<endl;                
    return 0;
}