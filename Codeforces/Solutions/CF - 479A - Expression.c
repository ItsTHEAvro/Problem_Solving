//143908695 	Jan/25/2022 00:55UTC+6 	ItsTHEAvro 	479A - Expression 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int max(int a, int b)
{
    return ((a>=b)?a:b);
}


int main()
{
    int a, b, c, x;
    scanf("%d%d%d", &a, &b, &c);

    x=a+b+c;
    x=max(x,(a*b*c));
    x=max(x,a+(b*c));
    x=max(x,(a+b)*c);
    x=max(x,a*(b+c));
    x=max(x,(a*b)+c);

    printf("%d", x);

    return 0;
}
