//143569294 	Jan/22/2022 09:34UTC+6 	ItsTHEAvro 	1367A - Short Substrings 	GNU C11 	Accepted 	78 ms 	0 KB

#include <stdio.h>

int main()
{
    char str[110];
    int t, i;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", &str);

        printf("%c", str[0]);
        for(i=1; i<strlen(str)-1; i+=2)
        {
            printf("%c", str[i]);
        }
        printf("%c\n", str[strlen(str)-1]);
    }

    return 0;
}
