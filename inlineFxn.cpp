#include<iostream>
using namespace std;
inline int square(int); //while function definition, use inline keyword
// inline decides if a function call is going to be replaced with its definition or not
int main()
{
    int x,y;
    cout<<"enter a number: ";
    cin>>x;
    y=square(x);
    cout<<"square of"<<x<<"is"<<y;
    return 0;
}
int square(int n)
{
    return n*n;
}