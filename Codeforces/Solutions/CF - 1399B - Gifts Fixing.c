//144926955 	Feb/02/2022 16:44UTC+6 	ItsTHEAvro 	1399B - Gifts Fixing 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

long long int min(long long int a, long long int b)
{
    return ((a>b)?b:a);
}

long long int max(long long int a, long long int b)
{
    return ((a>b)?a:b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, i;
        long long int ans=0, minC=9999999999, minO=9999999999;
        scanf("%d", &n);
        long long int candies[n], oranges[n];
        for(i=0; i<n; i++)
        {
            scanf("%lld", &candies[i]);
            minC=min(candies[i], minC);
        }
        for(i=0; i<n; i++)
        {
            scanf("%lld", &oranges[i]);
            minO=min(oranges[i], minO);
        }
        for(i=0; i<n; i++)
        {
            ans+=max((candies[i]-minC), (oranges[i]-minO));
        }
        printf("%lld\n", ans);
    }

    return 0;
}
