//143157239 Jan/18/2022 00:57UTC+6 ItsTHEAvro 32B - Borze GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    int i;
    char st[210];
    scanf("%s", &st);
    for(i=0; i<strlen(st); i++)
    {
        if(st[i]=='.') printf("0");
        if(st[i]=='-' && st[i+1]=='.')
        {
            printf("1");
            i++;
        }
        if(st[i]=='-' && st[i+1]=='-')
        {
            printf("2");
            i++;
        }
    }

    return 0;
}
