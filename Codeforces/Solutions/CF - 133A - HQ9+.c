//143116711 Jan/17/2022 18:05UTC+6 ItsTHEAvro 133A - HQ9+ GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    char str[110];
    int i;
    scanf("%s", &str);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");

    return 0;
}
