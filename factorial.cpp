#include<iostream>
using namespace std;
int main()
{
    int n,mul;
    cin>>n;
    if(n==0)
    cout<<"1";
    else if(n<0)
    cout<<"invalid factorial";
    else
    {
    for(int i=1; i<=n;i++)
    mul *= i;
    cout<<mul;
    }
}