#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int t,i=0,k=0;
    int d=2;
    
    for(i=0;i<d;i++)
    {
        t=a[i];
        k=i;
        for(k=i;k<n;k++)
        {
            a[k]=a[k+1];
        }
        a[n-i-1]=t;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}