//149010029 	Mar/09/2022 22:42UTC+6 	ItsTHEAvro 	1560A - Dislike of Threes 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int arr[1001], i, j=0;
    for(i=1; i<1800; i++)
    {
        if((i%3!=0)&&(i%10!=3)) arr[++j]=i;
        if(j>1000) break;
    }

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k;
        scanf("%d", &k);
        printf("%d\n", arr[k]);
    }

    return 0;
}
