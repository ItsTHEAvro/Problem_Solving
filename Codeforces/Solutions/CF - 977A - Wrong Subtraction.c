//143346356 Jan/19/2022 22:08UTC+6 ItsTHEAvro 977A - Wrong Subtraction GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    while(k--)
    {
        (n%10==0)?n/=10:n--;
    }
    printf("%d", n);

    return 0;
}
