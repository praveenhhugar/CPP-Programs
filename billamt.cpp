//C++ program to find the bill amount by consumers
#include<iostream>
using namespace std;

int main ()
{
    int u,billamt;
    cout<<"Enter the units consumed by user\n";
    cin>>u;
    if ((u>0)&&(u<=200))
        billamt=u*.50;
    else if ((u>200)&&(u<=400))
        billamt=100+(u-200)*0.65;
    else if ((u>400)&&(u<=600))
        billamt=230+(u-400)*0.80;
    else 
        billamt=390+(u-600)*1;
    cout<<"The bill amt is "<<billamt<<"";
    return 0;
}