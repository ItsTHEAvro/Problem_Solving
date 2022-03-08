//148924951 	Mar/09/2022 01:52UTC+6 	ItsTHEAvro 	339B - Xenia and Ringroad 	GNU C11 	Accepted 	60 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, m, temp, initial=1;
    long long int count=0;

    scanf("%d%d", &n, &m);

    while(m--)
    {
        scanf("%d", &temp);
        if(temp>=initial) count+=temp-initial;
        else count+=n-(initial-temp);
        initial = temp;
    }

    printf("%lld", count);

    return 0;
}
