//142957497 Jan/16/2022 19:34UTC+6 ItsTHEAvro A - Panoramix's Prediction GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int isPrime(int n)
{
    if (n <= 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}

int main()
{
    int n, m, temp;
    scanf("%d%d", &n, &m);
    temp=n+1;
    while(isPrime(temp)!= 1) temp++;
    (temp==m)?printf("YES"):printf("NO");
    return 0;
}
