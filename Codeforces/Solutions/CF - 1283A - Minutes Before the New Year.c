//144974692 	Feb/03/2022 01:44UTC+6 	ItsTHEAvro 	1283A - Minutes Before the New Year 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int h, m;
        scanf("%d%d", &h, &m);
        printf("%d\n", 1440-((h*60)+m));
    }

    return 0;
}
