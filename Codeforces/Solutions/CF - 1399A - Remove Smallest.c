//144636157 	Jan/31/2022 16:10UTC+6 	ItsTHEAvro 	1399A - Remove Smallest 	GNU C11 	Accepted 	15 ms 	0 KB

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
        int n, i, flag=1;
        scanf("%d", &n);
        int arr[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        bblSort(arr, n);
        for(i=0; i<n-1; i++)
        {
            if(arr[i+1]-arr[i]<=1) continue;
            else
            {
                flag=0;
                break;
            }
        }
        (flag)?printf("YES\n"):printf("NO\n");
    }

    return 0;
}
