//C++ program to find area of circle with given radius
#include<iostream>
using namespace std;
int main()
{
    float r,perimeter,area;
    cout<<"Enter thr radius"<<endl;
    cin>>r;
    perimeter=2*3.142*r;
    area=3.142*r*r;
    cout<<"The perimeter of circle is "<<perimeter<<endl;
    cout<<"The area of circle is "<<area<<endl;
    return 0;
}