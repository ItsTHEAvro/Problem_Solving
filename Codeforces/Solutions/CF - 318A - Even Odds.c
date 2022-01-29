//144444966 	Jan/29/2022 23:10UTC+6 	ItsTHEAvro 	318A - Even Odds 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    long long int n, k;
    scanf("%lld%lld", &n, &k);
    if (k <= (n+1)/2)
    {
        printf("%lld", (2*k)-1);
    }
    else
    {
        printf("%lld", 2*(k-(n+1)/2));
    }
    return 0;
}
