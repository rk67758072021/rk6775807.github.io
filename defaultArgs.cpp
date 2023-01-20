#include<iostream>
using namespace std;
int add(int, int=0, int=0);  //default value of third argument is 0.
//set default value while declaration.
int main()
{
    int a,b;
    cout<<"enter number: ";
    cin>>a;
    cout<<"sum is "<<add(a)<<endl;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"sum is "<<add(a,b)<<endl;
    int c;
    cout<<"enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"sum is "<<add(a,b,c)<<endl;
    return 0;
}

int add(int x, int y,int z)
{
    return x+y+z;
}

/*int add(int, int=0, int);*/
//after default args, we should have only default args
//so this declaration is error.