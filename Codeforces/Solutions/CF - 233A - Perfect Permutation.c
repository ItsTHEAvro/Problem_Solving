//142582908 Jan/13/2022 14:32UTC+6 ItsTHEAvro A - Perfect Permutation GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    if (n %2 != 0)
    {
        printf("-1");
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        (i%2!=0) ? printf("%d ", i+1) : printf("%d ", i-1);
    }
    return 0;
}
