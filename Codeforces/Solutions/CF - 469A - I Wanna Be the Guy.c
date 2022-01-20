//143377557 	Jan/20/2022 10:11UTC+6 	ItsTHEAvro 	469A - I Wanna Be the Guy 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, cntArr[110]={0}, lvlCnt, lvl;
    scanf("%d%d", &n, &lvlCnt);
    while(lvlCnt--)
    {
        scanf("%d", &lvl);
        cntArr[lvl]++;
    }
    scanf("%d", &lvlCnt);

    while(lvlCnt--)
    {
        scanf("%d", &lvl);
        cntArr[lvl]++;
    }

    for(lvl=1; lvl<=n; lvl++)
    {
        if(cntArr[lvl]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");

    return 0;
}
