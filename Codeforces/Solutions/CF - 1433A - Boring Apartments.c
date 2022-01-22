//143713318 	Jan/23/2022 01:11UTC+6 	ItsTHEAvro 	1433A - Boring Apartments 	GNU C11 	Accepted 	0 ms 	0 KB

#include <stdio.h>

int digitCount(int n)
{
    int digits=0;
    while(n>0)
    {
        n/=10;
        digits++;
    }
    return digits;
}


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int apt, digits, sum=0, i;
        scanf("%d", &apt);
        digits = digitCount(apt);

        if(apt%10!=1)
        {
            sum=(apt%10-1)*10;
            for(i=1; i<=digits; i++)
            {
                sum+=i;
            }
        }
        else
        {
            for(i=1; i<=digits; i++)
            {
                sum+=i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
