#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y;
    cout<<"before swapping ="<<x;
    cout<<"and ="<<y;
    z=x;
    x=y;
    y=z;
    cout<<endl<<"after swapping"<<x<<y;
    return 0;
}