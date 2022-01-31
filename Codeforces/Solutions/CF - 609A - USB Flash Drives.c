//144765433 	Jan/31/2022 23:31UTC+6 	ItsTHEAvro 	609A - USB Flash Drives	GNU C11 	Accepted 	30 ms 	0 KB

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
    int n, m, i, count=0, sum=0;
    scanf("%d%d", &n, &m);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bblSort(arr, n);

    for(i=n-1; i>=0; i--)
    {
        sum+=arr[i];
        ++count;
        if (sum>=m) break;
    }
    printf("%d", count);

    return 0;
}
