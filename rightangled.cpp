#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a*a==b*b+c*c)
    cout<<"right angle t";
    else if(b*b==a*a+c*c)
    cout<<"right angle t";
    else if(c*c==a*a+b*b)
    cout<<"right angle t";
    else
    cout<<"not right angle t";
    return 0;
}