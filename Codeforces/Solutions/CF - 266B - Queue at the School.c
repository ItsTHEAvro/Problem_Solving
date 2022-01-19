//143352255 Jan/19/2022 23:18UTC+6 ItsTHEAvro 266B - Queue at the School GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    int n, t, i;
    scanf("%d%d", &n, &t);

    char str[100];
    scanf("%s", &str);

    while(t--)
    {
        for(i=0; i<strlen(str); i++)
        {
            if((str[i]=='B')&&(str[i+1]=='G'))
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }

    }

    printf("%s", str);

    return 0;
}
