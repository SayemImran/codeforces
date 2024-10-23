#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101];
        int counter = 0;
        fgets(str,sizeof(str),stdin);

        while(str[counter] != '\0')
        {
            if(str[counter] == '\n')
            {
                str[counter] = '\0';
                break;
            }
            counter++;
        }
        if(counter<=10)
        {
            printf("%s",str);
        }
        else{
            printf("%c%d%c",str[0],(counter-2),str[counter-1]);
        }
        printf("\n");
    }

    return 0;
}
