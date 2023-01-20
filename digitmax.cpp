#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rem=0,lar=0;
    cin>>n;
    while(n>0)
    {
        rem = n%10;
        if(rem>lar)
        lar=rem;
        n /= 10;
    }
    cout<<lar;
}