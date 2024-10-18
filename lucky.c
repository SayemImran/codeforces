#include<stdio.h>
int main()
{
    int a,b,luckyCount = 0;
    scanf("%d %d",&a,&b);
    if(b<a)
    {
        int temp = b;
        b=a;
        a=temp;
    }

    for(int i = a; i <= b; i++)
    {
        int F_count=0, S_count=0, digit_count=0, isLucky=1;
        int rmdr = i;
        while(rmdr>0)
        {
            int xtract_dgt = rmdr%10;
            rmdr = rmdr/10;
            digit_count++;
            if(xtract_dgt == 4)
            {
                F_count++;
            }
            else if(xtract_dgt == 7)
            {
                S_count++;
            }
            else
            {
                isLucky = 0;
            }
        }
        if((F_count+S_count) == digit_count && isLucky)
        {
            printf("%d ",i);
            luckyCount++;
        }
    }
    if(luckyCount==0)
    {
        printf("-1\n");
    }
    return 0;
}
