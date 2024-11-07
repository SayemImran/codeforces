#include <stdio.h>
#include <string.h>
int Vowels(char *str, int st, int sz)
{
    int v_c = 0;
    char v_arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    if (st == sz)
    {
        return 0;
    }

    for (int i = 0; i < 10; i++)
    {
        if (str[st] == v_arr[i])
        {
            v_c = 1;
            break;
        }
    }
    return v_c + Vowels(str, st + 1, sz);
}
int main()
{
    char str[205];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    printf("%d\n", Vowels(str, 0, len));
    return 0;
}