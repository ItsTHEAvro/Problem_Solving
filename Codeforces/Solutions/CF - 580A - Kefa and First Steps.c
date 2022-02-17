//146755322 	Feb/17/2022 21:56UTC+6 	ItsTHEAvro 	580A - Kefa and First Steps 	GNU C11 	Accepted 	31 ms 	400 KB

#include <stdio.h>

int max(int a, int b)
{
    return ((a>b)?a:b);
}

int main()
{
    int n, flag=0, temp=1, i, maxVal=0;
    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        (temp>arr[i])?flag=1:++flag;
        temp = arr[i];
        maxVal = max(flag, maxVal);
    }

    printf("%d", maxVal);
    return 0;
}
