#include <stdio.h>
void ShiftZero(int *arr, int j)
{
    int position = 0, count = 0;
    // arr = {  4   ,   2   ,   1   ,   0   ,   8   ,   0   ,   9   ,   1   }
    for (int i = 0; i < j; i++)
    {
        if (arr[i] !=0)
        {
            arr[position++] = arr[i];
            count += 1;
            // 0 1 2 3 4 5
            // 4 2 1 8 9 1
        }
        
    }
    for (int i = count; i < j; i++)
    {
        arr[i] = 0;
    }
    

 
    for (int st = 0; st < j; st++)
    {
        printf("%d ",arr[st]);
    }
    printf("\n");
    
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
    ShiftZero(arr,n);
    
    return 0;
}