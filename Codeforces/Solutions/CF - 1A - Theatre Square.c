//143903933 	Jan/24/2022 23:53UTC+6 	ItsTHEAvro 	1A - Theatre Square 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    long long int n, m, a, ans;
    scanf("%lld%lld%lld", &n, &m, &a);
    ans=ceil((double)m/a)*ceil((double)n/a);
    printf("%lld", ans);

    return 0;
}
