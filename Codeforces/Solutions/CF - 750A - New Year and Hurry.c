//143489682 	Jan/21/2022 13:17UTC+6 	ItsTHEAvro 	750A - New Year and Hurry 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, k, count=0, x;

    scanf("%d%d", &n, &k);

    while(count<=n)
    {
        x=(5*(count*(count+1))/2)+k;
        if(x>240) break;
        count++;
    }

    printf("%d", count-1);

    return 0;
}
