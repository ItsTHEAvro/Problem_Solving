//148481752 	Mar/05/2022 22:21UTC+6 	ItsTHEAvro 	1392A - Omkar and Password 	GNU C11 	Accepted 	46 ms 	800 KB

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

void solve()
{
    int n, i, flag=0;
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n; i++) scanf("%d", &arr[i]);

    for(i=0; i<n; i++)
    {
        (i>0 && arr[i]!=arr[i-1])?flag=1:"";
    }

    (flag)?printf("1\n"):printf("%d\n", n);
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--) solve();

    return 0;
}
