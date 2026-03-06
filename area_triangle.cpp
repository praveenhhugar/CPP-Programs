//C++ progarm to find area of triangle
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float a,b,c,s,area;
    cout<<"Enter values of a b c\n";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is "<<area<<"";
    return 0;
}