#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(i=0;i<(num/2);i++){
    temp=*(arr+i);
    *(arr+i)=*(arr+num-i-1);
    *(arr+num-i-1)=temp;
    // printf("%d ", *(arr+i));
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
   // printf("%d",*(arr+num-2));
    //printf("%d",temp);
  
}