//148690537 	Mar/07/2022 17:27UTC+6 	ItsTHEAvro 	230B - T-primes 	GNU C11 	Accepted 	1248 ms 	0 KB

#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int i;
    if (n <= 1) return 0;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    while(n--)
    {
        long long int temp, sq_rt;
        scanf("%lld", &temp);

        sq_rt = sqrt(temp);

        if((sq_rt*sq_rt)==temp)
        {
            if(isPrime(sq_rt))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }

        else printf("NO\n");
    }

    return 0;
}
