#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character to check if it is an Alphabet or not : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>64 && ascii<91) || (ascii>96 && ascii<123))
    cout<<"The Character you Entered is an Alphabet "<<endl;
    else
    cout<<"The Character you Entered is not an Alphabet "<<endl;
    return 0;
}