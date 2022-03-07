//148671725 	Mar/07/2022 13:36UTC+6 	ItsTHEAvro 	451A - Game With Sticks 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int min(int a, int b)
{
    return ((a>b)?b:a);
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    (min(n, m)&1)?printf("Akshat"):printf("Malvika");

    return 0;
}
