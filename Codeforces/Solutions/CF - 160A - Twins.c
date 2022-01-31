//144633450 	Jan/31/2022 15:33UTC+6 	ItsTHEAvro 	160A - Twins 	GNU C11 	Accepted 	30 ms 	0 KB

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
    int n, i, sum1=0, sum2=0, count=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; ++i)
    {
        scanf("%d", &arr[i]);
        sum1 += arr[i];
    }

    sum1 /= 2;

    bblSort(arr, n);

    for(i=n-1; i>=0; i--)
    {
        sum2 += arr[i];
        ++count;
        if (sum2 > sum1) break;
    }

    printf("%d", count);

    return 0;
}
