//C++progarm to check the given character
#include<iostream>
using namespace std;

int main ()
{
    char ch;
    cout<<"Enter the character \n";
    cin>>ch;
    if ((ch>='A')&&(ch<='Z'))
    cout<<"The character is Uppercase\n";
    else if ((ch>='a')&&(ch<='z'))
        cout<<"The given character is lowercase\n";
    else if ((ch>='0')&&(ch<='9'))
        cout<<"The given character is number\n";
    else 
        cout<<"The given character is special symbol\n";
    return 0;
}