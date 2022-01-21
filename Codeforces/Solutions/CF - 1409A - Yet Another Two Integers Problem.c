//143540028 	Jan/21/2022 22:26UTC+6 	ItsTHEAvro 	1409A - Yet Another Two Integers Problem 	GNU C11 	Accepted 	93 ms 	0 KB

#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a==b)
        {
            printf("0\n");
            continue;
        }
        if (abs(a-b)%10==0)
        {
            printf("%d\n", abs(a-b)/10);
        }
        else printf("%d\n", (abs(a-b)/10)+1);
    }

    return 0;
}
