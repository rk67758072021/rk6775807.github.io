#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N,sum=0;
    cin>>N;
    for(int i=1;i<=N;i++)
    sum += pow(i,2);
    cout<<sum;
}