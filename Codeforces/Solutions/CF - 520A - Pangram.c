//142951795 Jan/16/2022 18:31UTC+6 ItsTHEAvro A - Pangram GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>
int isPangram(char str[110])
{
    int cntArr[26] = {0}, i;

    for(i=0; i<strlen(str); i++)
    {
        cntArr[tolower(str[i])-'a'] += 1;
    }

    for(i=0; i<26; i++)
    {
        if(cntArr[i]==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    char str[110];
    int n;
    while(scanf("%d%s", &n, &str)==2)
    {
        ((n>=26)&&isPangram(str))?printf("YES"):printf("NO");
    }
    return 0;
}
