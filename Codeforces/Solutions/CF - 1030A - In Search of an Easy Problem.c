//143355035 	Jan/19/2022 23:53UTC+6 	ItsTHEAvro 	1030A - In Search of an Easy Problem 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int i, n, arr[110], count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        count+=arr[i];
    }

    (count>0)?printf("HARD"):printf("EASY");
    return 0;
}
