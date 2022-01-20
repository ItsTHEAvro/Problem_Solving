//143379101 	Jan/20/2022 10:40UTC+6 	ItsTHEAvro 	A - Divisibility Problem 	GNU C11 	Accepted 	46 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        (a%b!=0)?printf("%d\n", b-(a%b)):printf("0\n");
    }

    return 0;
}
