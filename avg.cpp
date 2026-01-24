//C++ progarm to calculate average of three numbers
#include<iostream>
using namespace std;

int main ()
{
    float a,b,c,sum,avg;
    cout<<"Enter the values pf a b c\n";
    cin>>a;
    cin>>b;
    cin>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<"The average of these numbers is "<<avg<<"";
        return 0;
    }