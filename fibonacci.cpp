#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<n;i++)
    cout<<fib(i)<<"\t";
}
int fib(int n)
{
    if(n==1 || n==2)
    return(1);
    return (fib(n-1)+fib(n-2));
}