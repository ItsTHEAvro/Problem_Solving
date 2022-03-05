//148476634 	Mar/05/2022 21:09UTC+6 	ItsTHEAvro 	25A - IQ test 	GNU C11 	Accepted 	60 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, i, temp, last_even, last_odd, count_even=0, count_odd=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &temp);
        if(temp&1)
        {
            count_odd++;
            last_odd = i;
        }
        else
        {
            count_even++;
            last_even = i;
        }
    }
    (count_even>count_odd)?printf("%d", last_odd):printf("%d", last_even);

    return 0;
}
