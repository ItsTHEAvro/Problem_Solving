//148669351 	Mar/07/2022 13:02UTC+6 	ItsTHEAvro 	230A - Dragons 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, s, i, j, flag=1;
    scanf("%d%d", &s, &n);
    int x[n], y[n];
    for(i=0; i<n; i++)
    {
        scanf("%d%d", &x[i], &y[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(x[j]>0 && s>x[j])
            {
                s+=y[j];
                x[j]=-1;
                y[j]=-1;
            }

        }
    }

    for(i=0; i<n; i++)
    {
        if(x[i]>-1) flag=0;
    }

    flag?printf("YES"):printf("NO");

    return 0;
}
