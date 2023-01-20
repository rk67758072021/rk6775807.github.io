#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((b*b)-(4*a*c)==0)
    cout<<"equal roots";
    else if(((b*b)-(4*a*c))>0)
    cout<<"real roots";
    else
    cout<<"imaginary roots";
    return 0;
}