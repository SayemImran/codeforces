#include <stdio.h>
int main()
{
    int passwd = 1999;
    while (1)
    {
        int gpasswd;
        scanf("%d", &gpasswd);

        if (gpasswd == passwd)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

// accepted