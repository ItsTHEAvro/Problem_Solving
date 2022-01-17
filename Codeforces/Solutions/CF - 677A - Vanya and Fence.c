//142656792 Jan/14/2022 09:17UTC+6 ItsTHEAvro A - Vanya and Fence GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    int n, h;
    while(scanf("%d%d", &n, &h)==2)
    {
        int w=0, f=0;
        while(n--)
        {
            scanf("%d", &f);
            (f>h)?w+=2:w++;
        }
        printf("%d\n", w);
    }
    return 0;
}
