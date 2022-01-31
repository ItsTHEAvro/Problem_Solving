//144649593 	Jan/31/2022 19:04UTC+6 	ItsTHEAvro 	432A - Choosing Teams 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, k, i, count = 0;
    scanf("%d%d", &n, &k);

    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]+k<=5) ++count;
    }

    printf("%d", count/3);

    return 0;
}
