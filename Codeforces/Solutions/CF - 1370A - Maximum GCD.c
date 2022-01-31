//144763674 	Jan/31/2022 23:19UTC+6 	ItsTHEAvro 	1370A - Maximum GCD 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        (n&1)?printf("%d\n", (n-1)/2):printf("%d", n/2);
    }

    return 0;
}
