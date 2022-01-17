//143151034 Jan/17/2022 23:38UTC+6 ItsTHEAvro 1154A - Restoring Three Numbers GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    int x[4], i, j, temp;
    for(i=0; i<4; i++) scanf("%d", &x[i]);

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if(x[i]<x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    printf("%d %d %d", x[0]-x[1], x[0]-x[2], x[0]-x[3]);

    return 0;
}
