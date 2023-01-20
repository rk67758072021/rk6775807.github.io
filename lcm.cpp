#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1,n2,lcm=1;
    cin>>n1>>n2;
    int maxi=max(n1,n2);
    while(1)
    {
        if(maxi %n1==0 && maxi %n2==0)
        {
        cout<<maxi;
        break;
    }
    ++maxi;
}
}