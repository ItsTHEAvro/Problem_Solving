//143568537 	Jan/22/2022 09:20UTC+6 	ItsTHEAvro 	427A - Police Recruits 	GNU C11 	Accepted 	31 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, pCount=0, cCount=0;
    scanf("%d", &n);
    while(n--)
    {
        int x;
        scanf("%d", &x);
        if(x>0)
        {
            pCount += x;
        }
        else
        {
            if(pCount<1)
            {
                cCount++;
            }
            else
            {
                pCount--;
            }
        }
    }
    printf("%d", cCount);

    return 0;
}
