#include <stdio.h>

int main()
{
    long long int n, i, sum=0, k=-1;
    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        sum+=i*k;
        k=-k;
    }

    printf("%lld", sum);

    return 0;
}
