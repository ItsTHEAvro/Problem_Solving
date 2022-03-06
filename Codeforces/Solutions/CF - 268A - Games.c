//148526112 	Mar/06/2022 12:56UTC+6 	ItsTHEAvro 	268A - Games 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, i, j, count=0;
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
        scanf("%d", &arr2[i]);

    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            (arr1[i]==arr2[j])?count++:"";
        }
    }

    printf("%d", count);

    return 0;
}
