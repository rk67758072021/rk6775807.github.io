#include<iostream>
using namespace std;
int main()
{
    int num, count=0;
    cin>>num;
    while(num!=0)
    {
        num /= 10;
        count++;
    }
    cout<<count;
}