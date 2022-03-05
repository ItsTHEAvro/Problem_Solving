//148494971 	Mar/06/2022 01:33UTC+6 	ItsTHEAvro 	1374A - Required Remainder 	GNU C11 	Accepted 	218 ms 	0 KB

#include <stdio.h>

void solve()
{
    int x, y, n, k;
    scanf("%d%d%d", &x, &y, &n);
    k = n-(n%x)+y;
    (k<=n)?printf("%d\n", k):printf("%d\n",k-x);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}
