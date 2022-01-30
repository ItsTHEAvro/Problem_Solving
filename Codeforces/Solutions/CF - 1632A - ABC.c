//144590581 	Jan/31/2022 00:04UTC+6 	ItsTHEAvro 	A - ABC 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        char str[110];
        scanf("%d%s", &n, &str);

        if(n>2 || !(str[0]^str[1]))
        {
            printf("NO\n");
        }

        else printf("YES\n");
    }

    return 0;
}
