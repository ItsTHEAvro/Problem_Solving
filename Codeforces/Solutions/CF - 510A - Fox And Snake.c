//143700808 	Jan/22/2022 22:47UTC+6 	ItsTHEAvro 	A - Fox And Snake 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int a, b, i, j;
    scanf("%d%d", &a, &b);

    for(i=1; i<=a; i++)
    {
        if(i&1)
        {
            for(j=1; j<=b; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            if((i-2)%4==0)
            {
                for(j=1; j<b; j++)
                {
                    printf(".");
                }
                printf("#\n");
            }
            else
            {
                printf("#");
                for(j=1; j<b; j++)
                {
                    printf(".");
                }
                printf("\n");
            }
        }
    }

    return 0;
}
