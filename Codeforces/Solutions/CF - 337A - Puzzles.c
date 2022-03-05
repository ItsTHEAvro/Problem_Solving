//148478606 	Mar/05/2022 21:36UTC+6 	ItsTHEAvro 	337A - Puzzles 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int min(int a, int b)
{
    return ((a>b)?b:a);
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
    int i, m, n, ans;

    scanf("%d%d", &n, &m);

    int arr[m];
    for(i=0; i<m; i++) scanf("%d", &arr[i]);

    bblSort(arr, m);

    ans = arr[n-1]-arr[0];

    for(i=1; i<=(m-n); i++)
    {
        ans = min(ans, arr[i+n-1]-arr[i]);
    }

    printf("%d", ans);

    return 0;
}
