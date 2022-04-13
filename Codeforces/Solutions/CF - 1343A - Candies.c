//153510929 	Apr/13/2022 09:41UTC+6 	ItsTHEAvro 	1343A - Candies 	GNU C11 	Accepted 	62 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x=3, k=2;
        scanf("%d", &n);
        while(1)
        {
            if(n%x==0)
            {
                printf("%d\n", n/x);
                break;
            }
            k *= 2;
            x += k;
        }
    }

    return 0;
}
