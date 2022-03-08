//148910848 	Mar/08/2022 23:08UTC+6 	ItsTHEAvro 	313A - Ilya and Bank Account 	GNU C11 	Accepted 	62 ms 	0 KB

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n>0) printf("%d", n);
    else
    {
        int m1, m2;
        m1 = (n/100)*10+(n%10);
        m2 = n/10;
        (m1>m2)?printf("%d",m1):printf("%d",m2);
    }

    return 0;
}
