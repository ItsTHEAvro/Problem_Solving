//143392304 	Jan/20/2022 13:14UTC+6 	ItsTHEAvro 	705A - Hulk 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("I ");
        (i%2!=0)?printf("hate "):printf("love ");
        (i==n)?printf("it "):printf("that ");
    }

    return 0;
}
