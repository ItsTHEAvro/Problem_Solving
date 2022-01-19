//143355882 	Jan/20/2022 00:04UTC+6 	ItsTHEAvro 	486A - Calculating Function 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    long long int n, sum;
    scanf("%lld", &n);

    if(n%2==0)
        sum=n/2;
    else
        sum=((n+1)/2)*(-1);

    printf("%lld", sum);

    return 0;
}
