#include<iostream>
using namespace std;
#include<cmath>
float area(float r);
float area(float r)
{
    return 3.14*r*r;
}
int main()
{
    float r;
    cin>>r;
    cout<<"the area of the circle is "<<area(r);
}