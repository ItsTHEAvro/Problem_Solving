//142647056 Jan/14/2022 02:36UTC+6 ItsTHEAvro A - Insomnia cure GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    int k, l, m, n, d, cnt, i;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    if ((k==1)&&(l==1)&&(m==1)&&(n==1))
    {
        printf("%d", d);
        return 0;
    }
    else
    {
        cnt = d;
        for(i=0; i<=d; i++)
        {
            if((i%k!=0)&&(i%l!=0)&&(i%m!=0)&&(i%n!=0))
            {
                cnt--;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
