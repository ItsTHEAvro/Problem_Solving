//143516976 	Jan/21/2022 18:45UTC+6 	ItsTHEAvro 	581A - Vasya the Hipster 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a>b)
    {
        printf("%d %d", b, (a-b)/2);
    }
    else {
        printf("%d %d", a, (b-a)/2);
    }

    return 0;
}
