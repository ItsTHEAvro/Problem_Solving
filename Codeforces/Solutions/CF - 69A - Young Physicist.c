//143906765 	Jan/25/2022 00:26UTC+6 	ItsTHEAvro 	69A - Young Physicist 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int t, sumX=0, sumY=0, sumZ=0;
    scanf("%d", &t);
    while(t--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }

    if(sumX==0&&sumY==0&&sumZ==0) printf("YES");
    else printf("NO");

    return 0;
}
