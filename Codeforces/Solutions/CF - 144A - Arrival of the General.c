//148514213 	Mar/06/2022 10:22UTC+6 	ItsTHEAvro 	144A - Arrival of the General 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, i, maxVal=0, minVal=999, maxI, minI;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>maxVal)
        {
            maxVal = arr[i];
            maxI = i;
        }
        if(arr[i]<=minVal)
        {
            minVal = arr[i];
            minI = i;
        }
    }

    if(minI>maxI)
    {
        printf("%d", maxI+(n-1)-minI);
    }
    else
    {
        printf("%d", maxI+(n-1)-minI-1);
    }

    return 0;
}
