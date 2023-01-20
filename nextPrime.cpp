#include<iostream>
using namespace std;
int nextPrime(int n);
bool Prime(int i);
int main()
{
    int n;
    cin>>n;
    cout<<"the next Prime after "<<n<<" is "<<nextPrime(n);
}
int nextPrime(int n)
{
    int i;
    for(i=n;Prime(i);i++)
    {
        continue;
        return i;
    }

}
bool Prime(int i)
{
    for(int j=2;j<=(i/2);j++)
    if(i%j==0)
    return 0;
    else
    return 1;
}
