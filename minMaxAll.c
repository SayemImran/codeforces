#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a<=b && a<=c){
        if(b<=c){
            //b smaller than c ..  a,b,c
            printf("%d\n%d\n%d\n",a,b,c);
            printf("\n%d\n%d\n%d\n",a,b,c);
        }
        else{
            // c is smaller than b.. a,c,b
            printf("%d\n%d\n%d\n",a,c,b);
            printf("\n%d\n%d\n%d\n",a,b,c);
        }
    }
    else if(b<=a && b<=c){
        if(a<=c){
            // a smaller than c... b,a,c
            printf("%d\n%d\n%d\n",b,a,c);
            printf("\n%d\n%d\n%d\n",a,b,c);
        }
        else{
            // c is smaller than a.. b,c,a
            printf("%d\n%d\n%d\n",b,c,a);
            printf("\n%d\n%d\n%d\n",a,b,c);
        }
    }
    else{
        if(c<=a && c<=b){
            if(a<=b){
                // a is smaller than b.... c,a,b
                printf("%d\n%d\n%d\n",c,a,b);
                printf("\n%d\n%d\n%d\n",a,b,c);
            }
            else{
                // b is smaller than a... c, b, a
                printf("%d\n%d\n%d\n",c,b,a);
                printf("\n%d\n%d\n%d\n",a,b,c);
            }
        }
    }
    return 0;
}
