#include <stdio.h>
int main()
{
    int T, X, Y;
    scanf("%d", &T);
    if (T >= 1 && T <= 10)
    {
        for (int j = 1; j <= T; j++)
        {
            int sum = 0;
            scanf("%d %d", &X, &Y);

            if (X>Y)
            {
                int temp = Y;
                Y=X;
                X=temp;
            }
            
            for (int i = X + 1; i < Y; ++i)
            {
                if ((i % 2) != 0)
                {
                    sum = sum + i;
                }
            }
            printf("%d\n",sum);
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

// accepted