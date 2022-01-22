//143570343 	Jan/22/2022 09:57UTC+6 	ItsTHEAvro 	723A - The New Year: Meeting Friends 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int min(int a, int b)
{
    return ((a <= b) ? a : b);
}

int max(int a, int b)
{
    return ((a >= b) ? a : b);
}

int main()
{
    int p[3], i, mx, mn;
    for(i=0; i<3; i++)
    {
        scanf("%d", &p[i]);
    }
    mx = max(p[0], max(p[1], p[2]));
    mn = min(p[0], min(p[1], p[2]));
    printf("%d", mx-mn);

    return 0;
}
