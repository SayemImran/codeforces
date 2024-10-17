#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    if (t >= 1 && t <= 15)
    {
        while (t>0)
       {
        long long int fact = 1;
        scanf("%d",&n);
        if(n>=0 && n<=20)
        {
            if(n==0)
            {
            fact = 1;
            printf("%d\n",fact);
            }
            else{
                for (int i = n; i >=1; i--)
                {
                    fact=fact*i;
                }
                printf("%lld\n",fact);
            }   
        }
        t--;
       }
    }
    else{
        return 1;
    }

    return 0;
}

// accepted