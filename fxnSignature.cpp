#include<iostream>
using namespace std;
float area(int r);
int area(int, int);
int main()
{
 int r;
 cout<<"enter radius "<<endl;
 cin>>r;
 float A= area(r);
 int l,b;
 cout<<"enter a and b: "<<endl;
 cin>>l>>b;
 int a=area(l,b);
 cout<<"area of circle is "<<A<<endl;
 cout<<"area of rectangle is "<<a<<endl;
 return 0;
}
float area(int r)
{
    return 3.14*r;
}
int area(int x, int y)
{
    return x*y;
}