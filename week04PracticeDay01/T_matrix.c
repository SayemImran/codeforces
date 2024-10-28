#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, pd_sum=0, sd_sum=0, result;
    scanf("%d",&n);
    
    int matrix[n+5][n+5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        pd_sum+=matrix[i][i];
        sd_sum+=matrix[i][n-i-1];
    }
    result = abs(pd_sum-sd_sum);
    printf("%d\n",result);
    return 0;
}