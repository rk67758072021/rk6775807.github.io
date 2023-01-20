#include<stdio.h>
int fibonacci(int);
int main()
{
    int n;
   printf("%d",fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    // if(n==0)
    // return 0;
    if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n)+fibonacci(n-1);
    }
}