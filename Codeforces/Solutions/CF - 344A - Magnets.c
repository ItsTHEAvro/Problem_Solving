//143373962 	Jan/20/2022 08:56UTC+6 	ItsTHEAvro 	344A - Magnets 	GNU C11 	Accepted 	60 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, a, b, cnt=1;
    scanf("%d%d", &n, &b);
    while(--n)
    {
        scanf("%d", &a);
        if(a!=b)
        {
            cnt++;
            b=a;
        }
    }

    printf("%d", cnt);
    return 0;
}
