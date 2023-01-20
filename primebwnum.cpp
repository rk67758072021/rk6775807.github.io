#include<iostream>
using namespace std;
int primebwnum(int n1, int n2);
int largest(int i, int n2);
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<primebwnum(n1,n2);
}
int primebwnum(int n1, int n2)
{   int i=n1;
    for(i=n1;i<n1;i++)
    {
        for(int j=2; j<(largest(i,n2)/2);j++)
            if(i%j!=0)
            return i;
    }
}
int largest(int i, int n2)
{
    if(i>n2)
    return i;
    else 
    return n2;
}