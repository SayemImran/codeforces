#include <stdio.h>
int main()
{
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    if ((k >= 1 && k <= n) && n <= 50)
    {
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&nums[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (nums[i]>0 && nums[i]>= nums[k-1])
            {
                count++;
            }
        }
    }
    else
    {
        return 1;
    }
    printf("%d", count);
    return 0;
}
