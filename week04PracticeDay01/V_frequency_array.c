#include<stdio.h>
int main()
{
    int n,m;
    int fr[100002] = {0};
    scanf("%d %d",&n,&m);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        fr[arr[i]]++;
    }

    for (int i = 1; i <=m; i++)
    {
        printf("%d\n",fr[i]);
    }
    
    
    return 0;
}

/*
    নরমাল অ্যারে এর ভ্যালু fr অ্যারে এর ইনডেক্স হবে
    fr[]={0,0,0,0,0,0,0,0,0,0}
    updated
          1 2 3 4 5 6 7 8 9
    fr[]={2,2,2,1,0,0,1,0,2}
*/