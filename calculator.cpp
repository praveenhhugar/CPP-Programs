//C++ prpgram to build simple calculator
#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
    char op;
    float op1,op2,result;
    cout<<"Enter the operator(+-*/)\n";
    cin>>op;
    cout<<"Enter the operands\n";
    cin>>op1>>op2;
    if (op=='+')
        result=op1+op2;
    else if (op=='-')
        result=op1-op2;
    else if (op=='*')
        result=op1*op2;
    else if (op=='/')
      {  if (op2==0)
            {cout<<"Invalid operands\n";
            exit(0);}
        else 
            result=op1/op2;
        } 
    else
            {cout<<"Invalid operator\n";
            exit(0);}
cout<<"RESULT = "<<result<<"";
    return 0;
}