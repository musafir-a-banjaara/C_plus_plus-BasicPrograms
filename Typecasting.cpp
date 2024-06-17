#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Capital Alphabets whose position you want to see "<<endl;
    cin>>ch;
    cout<<"Its's ASCII value is : "<<(int)ch<<endl;
    cout<<"It's Actual Value is : "<<(int)ch - 64<<endl;
    return 0;
}