#include <stdio.h>

int logarithm(int n)
{
    if (n<=1)
    {
        return 0;
    }     
    return 1+logarithm(n/2);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",logarithm(n));
    return 0;
}
