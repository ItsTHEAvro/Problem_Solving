//148753568 	Mar/08/2022 10:00UTC+6 	ItsTHEAvro 	706B - Interesting drink 	GNU C11 	Accepted 	436 ms 	400 KB

#include <stdio.h>
#define MAX 100000

int main()
{
    int arr[MAX]={0}, n, i, q, temp;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &temp);
        arr[temp-1]++;
    }

    for(i=1; i<MAX; i++)
    {
        arr[i] += arr[i-1];
    }

    scanf("%d", &q);
    while(q--)
    {
        scanf("%d", &temp);
        if(temp<MAX) printf("%d\n", arr[temp-1]);
        else printf("%d\n", arr[MAX-1]);
    }

    return 0;
}
