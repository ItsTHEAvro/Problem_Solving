//148861154 	00:50:26 	ItsTHEAvro 	A - Deletions of Two Adjacent Letters 	GNU C11 	Accepted 	15 ms 	4 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int i, flag=0;
        char str[50], temp;
        scanf("%s", &str);
        getchar();
        scanf("%c", &temp);
        for(i=0; i<strlen(str); i++)
        {
            if(((i+1)&1) && str[i]==temp) flag=1;
        }
        flag?printf("YES\n"):printf("NO\n");
    }

    return 0;
}
