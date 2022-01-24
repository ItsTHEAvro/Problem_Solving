//143860734 	Jan/24/2022 16:10UTC+6 	ItsTHEAvro 	1472A - Cards for Friends 	GNU C11 	Accepted 	46 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int w, h, n, cnt = 1;
        scanf("%d%d%d", &w, &h, &n);
        while((w&1)==0)
        {
            cnt*=2;
            w/=2;
        }
        while((h&1)==0)
        {
            cnt*=2;
            h/=2;
        }
        (cnt>=n)?printf("YES\n"):printf("NO\n");
    }

    return 0;
}
