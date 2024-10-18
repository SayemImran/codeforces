#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int isPrime = 1;
    scanf("%d",&n);

    if(n<=1){
        isPrime = 0;
    }

    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
