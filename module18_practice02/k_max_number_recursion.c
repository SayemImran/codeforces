#include <stdio.h>

int max(long long int *arr, int i, int j)
{
    if (i==j)
    {
        return arr[i];
    }
    long long int max_value = max(arr,i+1,j);
    if (arr[i]>=max_value)
    {
        return arr[i];
    }
    else{
        return max_value;
    }
       
}

int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    printf("%d",max(arr,0,n-1));
    printf("\n");
    
    return 0;
}