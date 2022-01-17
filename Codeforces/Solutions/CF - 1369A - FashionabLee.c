//143154994 Jan/18/2022 00:24UTC+6 ItsTHEAvro 1369A - FashionabLee GNU C11 Accepted 46 ms 0 KB

#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        (n%4==0)?printf("YES\n"):printf("NO\n");
    }

    return 0;
}
