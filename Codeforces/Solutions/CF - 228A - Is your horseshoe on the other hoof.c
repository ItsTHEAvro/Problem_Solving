//142558757 Jan/13/2022 09:16UTC+6 ItsTHEAvro A - Is your horseshoe on the other hoof? GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

void sortArr(int arr[4])
{
    int i, j, temp;
    for (i = 0; i<4; i++)
    {
        for (j = 0; j<4-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int hs[4], i, c=0;
    for(i = 0; i<=3; i++)
    {
        scanf("%d", &hs[i]);
    }
    sortArr(hs);
    for (i=0; i<4; i++)
    {
        (hs[i]==hs[i+1])? c++: "";
    }
    printf("%d", c);
    return 0;
}
