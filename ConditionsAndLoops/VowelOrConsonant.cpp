#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>64 && ascii<91) || (ascii>96 && ascii<123))
    {
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        cout<<"The given Alphabet is a Vowel ";
        else
        cout<<"The given Alphabet is a Consonant ";
    }
    else
    cout<<"The Character you Entered is not an Alphabet "<<endl;
    return 0;
}