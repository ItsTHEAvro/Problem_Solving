//148676359 	Mar/07/2022 14:42UTC+6 	ItsTHEAvro 	1367B - Even Array 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, i, Even=0, Odd=0, temp;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &temp);
            if((temp&1) != (i&1))
            {
                (i&1)?Even++:Odd++;
            }
        }
        (Odd==Even)?printf("%d\n", Even):printf("-1\n");
    }

    return 0;
}
