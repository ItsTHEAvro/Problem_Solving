//146654275 	Feb/16/2022 22:42UTC+6 	ItsTHEAvro 	758A - Holiday Of Equality 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int max(int a, int b)
{
    return ((a>b)?a:b);
}

int main()
{
    int n, i, maxVal, total=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        maxVal = max(arr[i], maxVal);
    }

    for(i=0; i<n; i++)
    {
        total += maxVal - arr[i];
    }

    printf("%d", total);

    return 0;
}
