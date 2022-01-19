//143347933 Jan/19/2022 22:27UTC+6 ItsTHEAvro 116A - Tram GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    int n, max=0, a, b=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        b-=a;
        scanf("%d", &a);
        b+=a;
        (b>max)?max=b:"";
    }
    printf("%d", max);

    return 0;
}
