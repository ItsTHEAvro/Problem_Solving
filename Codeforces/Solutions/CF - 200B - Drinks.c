//143454370 	Jan/21/2022 00:26UTC+6 	ItsTHEAvro 	200B - Drinks 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, a, i;
    long double sum=0.0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        sum+=a;
    }

    printf("%llf", sum/i);

    return 0;
}
