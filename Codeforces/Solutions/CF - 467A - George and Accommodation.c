//143354243 	Jan/19/2022 23:42UTC+6 	ItsTHEAvro 	467A - George and Accommodation 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, p, c, count=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d%d", &p, &c);
        (c-p)>=2?count++:"";
    }

    printf("%d", count);

    return 0;
}
