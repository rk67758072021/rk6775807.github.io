/*sbse pehle hum d se lekr last tk ke elements ko kisi temp array mein rkhenge fir original array ke bache huwe elements
yaani ki 0 se lekr d tk ko temp ke last mein rkh denge fir temp ke elements ko copy kr denge original array mein!*/
#include<iostream>
using namespace std;
int main()
{
int a[]= {1,2,3,4,5,6,7};
int d=2;
int k=0;
int n=sizeof(a)/sizeof(a[0]);
int temp[n];
for(int i=d;i<n;i++)
{
    temp[k]=a[i];
    k++;
}
for(int i=0;i<d;i++)
{
    temp[k]=a[i];
    k++;
}
for(int i=0;i<n;i++)
{
    a[i]=temp[i];
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<"\t";
}
}