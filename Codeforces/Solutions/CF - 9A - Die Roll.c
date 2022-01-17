//143115247 Jan/17/2022 17:50UTC+6 	ItsTHEAvro 	9A - Die Roll 	GNU C11 Accepted 30 ms 	0 KB

#include <stdio.h>

int main()
{
    int a, b, i;
    scanf("%d%d", &a, &b);

    (a>b)?b=a:"";
    a=(6-b)+1;
    b=6;

    for(i=1; i<=6; i++)
    {
        if(a%i==0&&b%i==0)
        {
            a/=i;
            b/=i;
        }
    }

    printf("%d/%d", a, b);

    return 0;
}
