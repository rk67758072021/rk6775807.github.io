#include<iostream>
using namespace std;
 
 
     bool isHappy(int n) {
     int flag=0;

for(int i=1;i<1000;i++)
{
    int q,r=0;
    while(n!=0)
    {
        q=n%10;
        r=r+q*q;
        n/=10;
        
    }
    if(r==1)
    {
        flag=1;
        break;
    }
}
if(flag){
return true;
}
else
return false;
    }

int main()
{
    int n;
    cin>>n;
    // if(isHappy(n))
    // cout<<"happy";
    // else
    // cout<<"not happy";
    cout<<isHappy(n);
}
