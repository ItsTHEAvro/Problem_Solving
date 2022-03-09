//149008099 	Mar/09/2022 22:18UTC+6 	ItsTHEAvro 	1360B - Honest Coach 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bblSort(int arr[], int size)
{
    int i, j;
    for(i=0; i<size-1; ++i)
    {
        for(j=0; j<size-i-1; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, ans, i;
        scanf("%d", &n);

        int arr[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        bblSort(arr, n);

        ans = arr[1]-arr[0];

        for(i=2; i<n; i++)
        {
            if(ans > arr[i]-arr[i-1])
            {
                ans = arr[i]-arr[i-1];
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
