//C++ program to check given number is odd or even
#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    cout<<"Enter the number\n";
    cin>>num;
    rem=num%2;
    if(rem==0)
        cout<<"The given number is even\n";
    else
        cout<<"The given number is odd\n";
    return 0;
}