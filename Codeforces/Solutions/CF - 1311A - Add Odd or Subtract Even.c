//146753516 	Feb/17/2022 21:37UTC+6 	ItsTHEAvro 	1311A - Add Odd or Subtract Even 	GNU C11 	Accepted 	46 ms 	0 KB

#include <stdio.h>

void solve(int a, int b)
{
    int diff = a-b;

    if(diff==0)
    {
        printf("0\n");
    }

    else
    {
        if (diff>0)
        {
            (diff&1)?printf("2\n"):printf("1\n");
        }
        else
        {
            (diff&1)?printf("1\n"):printf("2\n");
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        solve(a, b);
    }

    return 0;
}
