#include<stdio.h>
int main()
{
    int n,m,x, found = 0;
    scanf("%d %d",&n,&m);

    int matrix[n+5][m+5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    scanf("%d",&x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == x)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
        
    }

    if (found)
    {
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }
    
    
    return 0;
}