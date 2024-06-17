#include<iostream>
using namespace std;
int main()
{
    float CP, SP, Profit, Loss;
    cout<<"Enter the Cost Price of the Product : Rs. ";
    cin>>CP;
    cout<<"Enter the Selling Price of the Product : Rs. ";
    cin>>SP;
    if(CP>SP)
    {
        Loss = CP - SP;
        cout<<"You incurred a loss of Rs. "<<Loss;
    }
    else if(CP==SP)
    cout<<"You neither suffered Loss nor gained Profit ";
    else{
        Profit = SP - CP;
        cout<<"You made a profit of Rs. "<<Profit;
    }
    return 0;
}