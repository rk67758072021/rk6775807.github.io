#include<stdio.h>
int main()
{
    int n1, n2, sum;
    printf("enter numbers:");
    scanf("%d %d",&n1,&n2);
    printf("the sum of %d and %d is %d", n1, n2, add(&n1,&n2));
}
int add(int *n1, int *n2){
    int sum;
    sum = *n1 + *n2;
    return sum;
}