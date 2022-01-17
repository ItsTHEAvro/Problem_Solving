//142759287 Jan/15/2022 11:13UTC+6 ItsTHEAvro A - Bear and Big Brother GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    int l, b, yc=0;
    scanf("%d%d", &l, &b);
    while(b > l || b == l)
    {
        l*=3;
        b*=2;
        yc++;
    }
    printf("%d", yc);
    return 0;
}
