//148715514 	Mar/07/2022 21:39UTC+6 	ItsTHEAvro 	B - Vanya and Lanterns 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int max(int a, int b)
{
    return ((a>b)?a:b);
}

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
    int n, l, i, diff;
    scanf("%d%d", &n, &l);

    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bblSort(arr, n);

    diff = 2 *(max(arr[0], l-arr[n-1]));

    for(i=1; i<n; i++)
    {
        diff = max(diff, (arr[i]-arr[i-1]));
    }

    printf("%f", diff/2.0);

    return 0;
}
