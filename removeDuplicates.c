#include<stdio.h>
#include<
int removeDuplicates(int*, int);
int main()
{
    int *nums, numsSize;
    //     int nums, *ptr;  
    // printf (" Define the size of the array element: ");  
    // scanf (" %d", &num);  
      
    // ptr = (int *) malloc (num * sizeof(int));  
      
    // printf (" \n Enter the elements of the array: \n");  
    // // use for loop to read elements  
    // for ( i = 0; i < num; i++)  
    // {  
    //     scanf (" %d", (ptr+i));  
    // }  
  
    // // call function to print the unique elements  
    // remove_element (ptr, num);  
    // return 0;  
    print("define the size of the array element: ");
    scanf("%d",&nums);

nums=(int*)malloc(numsSize*sizeof(int));
printf("\n enter the elements of the array: \n");
for(int i=0;i<numsSize;i++)
{
    scanf("%d",(nums+i));
}
removeDuplicates(nums,numsSize);
return 0;
}
int removeDuplicates(int* nums, int numsSize){
int temp;  
  
// use for loop   
  int i,j;
for ( i = 0; i < numsSize-1; i++)  
{  
    for (j = i + 1; j < numsSize; j++)  
    {  
        // if statement to check the same number int sorted array  
        if ( *(nums+i) == *(nums+j))  
        {  
            temp = *(nums + j);  
            *(nums + j) = *(nums + numsSize - 1);  
            *(nums + numsSize - 1) = temp;  
            numsSize--;  
        }  
    }  
}     
    return *nums;
    // printf (" After removing the duplicate elements: ");  
    // for ( i = 0; i < numsSize; i++)  
    // {  
    //     // printf (" %d \t", *(nums+i)); 
    //     return *(nums+i);
    // }  
}