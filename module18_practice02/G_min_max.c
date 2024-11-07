#include <stdio.h>

int min(int *ar, int n){
 int Min = ar[0];
 for (int i = 0; i < n; i++)
 {
    if (ar[i]<=Min)
    {
        Min = ar[i];
    }
 }
 return Min;
 
}
int max(int *ar,int n){
    int Max=ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i]>=Max)
        {
            Max = ar[i];
        }
    }
    return Max;
}
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d %d\n",min(arr,n),max(arr,n));
    
    return 0;
}