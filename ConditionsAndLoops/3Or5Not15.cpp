#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Integer you want to check : ";
    cin>>n;
    if(n%3==0 || n%5==0)
    {
        if(n%15!=0)
        cout<<"Integer is either divisible by 3 or by 5 but not by 15. ";
        else
        cout<<"All the conditions are not satisfied ";
    }
    else 
    cout<<"All the conditions are not satisfed ";
    return 0;
}