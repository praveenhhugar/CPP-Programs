//CPP program for linear search in an array
#include<iostream>
using namespace std;
int main()
{
    int i,n,position,key;
    cout<<"Enter n value"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key element"<<endl;
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            position=i;
            break;
        }
    }
    if(position==-1)
    {
        cout<<"Search is unsecessful"<<endl;
    }
    else{
        cout<<"Elements found at"<<position<<""<<endl;
    }
    return 0;
}