//C++ program to find distance between two points
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2,distance;
    cout<<"Enter the points\n";
    cin>>x1>>x2>>y1>>y2;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"The distance is "<<distance<<endl;
    return 0;
}