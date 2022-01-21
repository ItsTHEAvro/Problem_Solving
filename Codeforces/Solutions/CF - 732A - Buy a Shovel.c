//143541725 	Jan/21/2022 22:43UTC+6 	ItsTHEAvro 	732A - Buy a Shovel 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int a, b, count=0;
    scanf("%d%d", &a, &b);

    while(1)
    {
        count++;
        if(a*count%10==b||a*count%10==0) break;
    }
    printf("%d", count);

    return 0;
}
