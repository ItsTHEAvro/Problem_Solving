//144990862 	Feb/03/2022 10:28UTC+6 	ItsTHEAvro 	1584A - Mathematical Addition 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int x, y;
        scanf("%lld%lld", &x, &y);
        printf("%lld %lld\n", -(x*x), y*y);
    }

    return 0;
}
