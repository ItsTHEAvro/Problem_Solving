//142954872 Jan/16/2022 19:07UTC+6 ItsTHEAvro A - Mishka and Game GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    int rounds, mDice, cDice, mCnt=0, cCnt=0;
    scanf("%d", &rounds);
    while(rounds--)
    {
        scanf("%d%d", &mDice, &cDice);
        if (mDice==cDice) continue;
        (mDice > cDice)?mCnt++:cCnt++;
    }
    if (mCnt==cCnt)
    {
        printf("Friendship is magic!^^");
    }
    else if (mCnt > cCnt) printf("Mishka");
    else printf("Chris");
    return 0;
}
