//143480546 	Jan/21/2022 11:32UTC+6 	ItsTHEAvro 	1335A - Candies and Two Sisters 	GNU C11 	Accepted 	46 ms 	0 KB

#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        (n==1||n==2)?printf("0\n"):printf("%d\n", (n-1)/2);
    }

    return 0;
}
