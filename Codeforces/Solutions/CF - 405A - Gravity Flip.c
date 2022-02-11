//145978361 	Feb/11/2022 23:26UTC+6 	ItsTHEAvro 	405A - Gravity Flip 	GNU C11 	Accepted 	15 ms 	0 KB

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
    int n, arr[110], i;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bblSort(arr, n);

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
