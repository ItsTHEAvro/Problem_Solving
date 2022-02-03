//144975550 	Feb/03/2022 01:58UTC+6 	ItsTHEAvro 	1294A - Collecting Coins 	GNU C11 	Accepted 	46 ms 	0 KB

#include <stdio.h>

int max(int a, int b)
{
    return ((a>b)?a:b);
}


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, c, n, M=0;
        scanf("%d%d%d%d", &a, &b, &c, &n);
        M = max(a, max(b, c));
        n -= (M-a)+(M-b)+(M-c);
        (n>=0&&n%3==0)?printf("YES\n"):printf("NO\n");
    }
    return 0;
}
