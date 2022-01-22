//143588958 	Jan/22/2022 13:45UTC+6 	ItsTHEAvro 	1360A - Minimal Square 	GNU C11 	Accepted 	31 ms 	0 KB

#include <stdio.h>

int min(int a, int b)
{
    return ((a>=b)?b:a);
}

int max(int a, int b)
{
    return ((a<=b)?b:a);
}


int main()
{
    int a, b, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &a, &b);
        if(min(a,b)*2<max(a,b))
        {
            printf("%d\n", max(a, b)*max(a,b));
        }
        else
        {
            printf("%d\n", 4*min(a, b)*min(a, b));
        }
    }

    return 0;
}
