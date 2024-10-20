#include<stdio.h>
int main()
{
    int sz;
    scanf("%d",&sz);
    int arr[sz];

    for(int i = 0; i < sz; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    int pos, data;
    scanf("%d %d",&pos,&data);
    sz++;
    /* 0  1  2  3  4 ==> index
       1  2  3  4  5  ==> position 3  data insert == 10
                i  i+1
      10 20 10 30  40 50

    */

    for(int i = sz-1; i>=pos-1; i--)
    {
        arr[i+1] = arr[i];

    }



    printf("Array after moving the elements to the next position : ");
    for(int i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }



    arr[pos-1] = data;




    printf("\nArray after inserting the value at the exact position : ");
    for(int i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
