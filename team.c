#include<stdio.h>
int main()
{
    int n;
    int i = 1, counter = 0;
    scanf("%d",&n);
    while (i<=n)
    {
    int p, v, t;
    scanf("%d %d %d",&p,&v,&t);

    if ((p==1 && v == 1) || (p==1 && t==1) || (v==1 && t==1))
    {
        counter++;
    }
    i++;
    }
    printf("%d",counter);
    return 0;
}
