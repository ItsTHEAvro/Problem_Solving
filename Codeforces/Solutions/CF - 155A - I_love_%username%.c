//142645233 Jan/14/2022 01:51UTC+6 ItsTHEAvro A - I_love_\%username\% GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    int n, cnt=0, i, best, worst;
    scanf("%d", &n);
    scanf("%d", &best);
    worst = best;
    while(--n)
    {
        int temp;
        scanf("%d", &temp);
        if (temp>best)
        {
            best = temp;
            cnt++;
        }
        if (temp<worst)
        {
            worst = temp;
            cnt++;
        }
    }
    printf("%d", cnt);
    return  0;
}
