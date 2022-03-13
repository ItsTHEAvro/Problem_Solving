//149550604 	Mar/13/2022 23:39UTC+6 	ItsTHEAvro 	1512A - Spy Detected! 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {

        int n, cntArr[101]= {0}, i, num;
        scanf("%d", &n);
        int arr[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
            cntArr[arr[i]]++;
        }
        for(i=1; i<101; i++)
        {
            if(cntArr[i]==1)
            {
                num = i;
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            (arr[i]==num)?printf("%d\n", i+1):"";
        }
    }
    return 0;
}
