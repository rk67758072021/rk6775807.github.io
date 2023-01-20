#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void calculate_the_maximum(int n, int k) {
    int max;
    for( int i=1; i<n;i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            i&j;
            if((i&j)<k)
            max=(i&k);
            else
            continue;
        }
    }
    return max;
}

int main()
{
int n,k;
scanf("%d %d", &n ,&k);
calculate_the_maximum(n, k);

return 0;
}