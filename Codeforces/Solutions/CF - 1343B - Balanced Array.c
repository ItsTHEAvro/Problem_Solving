//148693017 	Mar/07/2022 17:51UTC+6 	ItsTHEAvro 	1343B - Balanced Array 	GNU C11 	Accepted 	795 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, i, s1=0, s2=0;
        scanf("%d", &n);
        if((n/2)&1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            for(i=1; i<=n/2; i++)
            {
                printf("%d ", 2*i);
                s1 += 2*i;
            }
            for(i=0; i<n/2-1; i++)
            {
                printf("%d ", 2*i+1);
                s2 += 2*i+1;
            }
            printf("%d\n", s1-s2);
        }
    }

    return 0;
}
