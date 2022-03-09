//149014508 	Mar/09/2022 23:14UTC+6 	ItsTHEAvro 	1475A - Odd Divisor 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        (n&(n-1))?puts("YES"):puts("NO");
    }

    return 0;
}
