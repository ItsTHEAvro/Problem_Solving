//123591817 Jul/24/2021 15:30UTC+6 ItsTHEAvro A - Team GNU C11 Accepted 62 ms 3600 KB

#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        int p=0, t=0, v=0, count=0;
        while(n--)
        {
            scanf("%d%d%d", &p, &t, &v);
            ((p+t+v)>=2)?count++:"";
        }
        printf("%d\n", count);
    }
    return 0;
}
