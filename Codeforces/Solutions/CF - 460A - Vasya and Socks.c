//144965569 	Feb/02/2022 23:38UTC+6 	ItsTHEAvro 	460A - Vasya and Socks 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", n+((n-1)/(m-1)));

    return 0;
}
