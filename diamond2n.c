#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <=n-row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= ((2*row)-1); col++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    /*
   starts from N  and gradually decreases n-1, n-2,n-3 ... and so on
    */ 
    for (int rev_row = n; rev_row >= 1; rev_row--) 
    {
        /*
            colum starts from 1 and increases upto (Total - row) number decreases
        */
        for (int rev_col = 1; rev_col <= n-rev_row; rev_col++)
        {
            printf(" ");
        }
        for (int rev_col = 1; rev_col <= ((2*rev_row)-1); rev_col++)
        {
            printf("*");
        }
        printf("\n");   
    }
    return 0;
}