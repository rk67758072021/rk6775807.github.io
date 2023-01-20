#include<stdio.h>
void main()
{
    int num1,num2;
    int *ptr1=&num1,*ptr2=&num2;
    printf("Input the first number: ");
    scanf("%d",*ptr1);
    printf("Input the second number: ");
    scanf("%d",*ptr2);
    printf("The sum of %d and %d is %d", *ptr1, *ptr2, *ptr1+ *ptr2);
}