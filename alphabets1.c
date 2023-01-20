#include<stdio.h>
int main()
{
    char c;
    printf("enter u to display uppercase alphabets. \n");
    printf("enter l to display lowercase alphabets. \n");
    scanf("%c", &c);
    if(c == 'U' || c =='u')
    {
        for (c ='A'; c<='Z'; ++c)
        printf("%c",c);
    }
    else if (c=='L' || c =='l')
    {
        for (c='a';c<='z';++c)
        printf("%c",c);
    }
    else
    printf("error! You entered an invalid character");
    return 0;
}