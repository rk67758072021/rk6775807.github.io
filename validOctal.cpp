#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num>10)
    {
        // num %= 10;
        num /= 10;
    }
    cout<<num;
    if(num == 0)
    cout<<"valid octal number";
    else
    cout<<"invalid octal number";
    return 0;
}