#include<stdio.h>

int main()
{
    char str[1000];
    int counter = 0;
    int pcheck = 1;
    fgets(str,sizeof(str), stdin);

    while(str[counter] != '\0')
    {
        if(str[counter]=='\n')
        {
            str[counter] = '\0';
            break;
        }
        counter++;
    }

    for(int i=0; i<counter; i++)
    {
        if(str[i]==str[counter-i-1])
        {
            pcheck=1;
        }
        else
        {
            pcheck=0;
            break;
        }

    }
    if(pcheck)
    {
        printf("YES\n");
    }
    if(!pcheck)
    {
        printf("NO\n");
    }


    return 0;
}
