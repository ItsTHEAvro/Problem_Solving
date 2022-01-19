//143353557 	Jan/19/2022 23:34UTC+6 	ItsTHEAvro 	271A - Beautiful Year 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int year, a, b, c, d;
    scanf("%d", &year);
    while(1)
    {
        year++;
        a=year%10;
        b=year/10%10;
        c=year/100%10;
        d=year/1000%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d) break;
    }
    printf("%d", year);

    return 0;
}
