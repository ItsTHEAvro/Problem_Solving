//143152867 Jan/17/2022 23:59UTC+6 ItsTHEAvro 119A - Epic Game GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int gcd(int a, int b)
{
    int i;
    while((i=a%b)!=0)
    {
        a=b;
        b=i;
    }
    return b;
}

int main()
{
    int s, as, h, i=1;
    scanf("%d%d%d", &s, &as, &h);
    while(1)
    {
        h-=gcd(s, h);
        if (h <= 0)
        {
            printf("0");
            break;
        }
        h-=gcd(as, h);
        if (h <= 0)
        {
            printf("1");
            break;
        }
    }

    return 0;
}
