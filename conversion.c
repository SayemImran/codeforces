#include<stdio.h>

int main()
{
    char str[100001];
    int counter = 0;
    fgets(str,sizeof(str), stdin);

    while(str[counter] !=0 )
    {
        if(str[counter] == '\n')
        {
            str[counter] = '\0';
            break;
        }
        counter++;
    }
    counter = 0;
    while(str[counter] != '\0')
    {
        if(str[counter]>='a' && str[counter]<='z')
        {
            str[counter]=str[counter]-32;
        }
        else if(str[counter]>='A' && str[counter]<='Z'){
            str[counter]=str[counter]+32;
        }

        else if(str[counter] == ',')
        {
            str[counter] = ' ';
        }
        counter++;
    }

    printf("%s",str);
    return 0;
}
