//143372794 	Jan/20/2022 08:32UTC+6 	ItsTHEAvro 	136A - Presents 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, a, output[110], i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a);
        output[a]=i;
    }

    for(i=1; i<=n; i++)
    {
        printf("%d ", output[i]);
    }

    return 0;
}
