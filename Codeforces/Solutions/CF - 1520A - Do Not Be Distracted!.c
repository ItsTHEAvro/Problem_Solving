//143732713 	Jan/23/2022 10:17UTC+6 	ItsTHEAvro 	1520A - Do Not Be Distracted! 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int count[26]= {0}, n, i, flag=1;
        char str[60];
        scanf("%d", &n);
        scanf("%s", &str);

        for(i=0; i<strlen(str); i++)
        {
            count[str[i]-'A']++;
            if(count[str[i]-'A']>1 && str[i]!=str[i-1])
            {
                flag = 0;
                break;
            }
        }
        flag?printf("YES\n"):printf("NO\n");
    }

    return 0;
}
