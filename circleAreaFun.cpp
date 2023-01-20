#include<iostream>
using namespace std;
float area(float r);
int main()
{
    int r;
    cin>>r;
    cout<<area(r);
}
float area(float r)
{
    return 3.14*r*r;
}