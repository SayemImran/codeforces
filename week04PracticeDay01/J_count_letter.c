#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000002];
    int fr[26] = {0};
    scanf("%s",&str);
    getchar();

    for (int i = 0; i < strlen(str); i++)
    {
        int char_indx = str[i]-'a';
        fr[char_indx]++;
        
    }

    for (int i = 0; i < 26; i++)
    {
        if (fr[i]>0)
        {
            printf("%c : %d\n",'a'+i,fr[i]);
        }
        
    }
    
    return 0;
}
