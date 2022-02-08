//145681382 	Feb/09/2022 00:16UTC+6 	ItsTHEAvro 	122A - Lucky Division 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, i, flag=0, l_nums[12]={4,7,47,74,44,444,447,474,477,777,774,744};
    scanf("%d", &n);
    for(i=0; i<12; i++)
    {
        (n%l_nums[i]==0)?flag=1:"";
    }
    (flag)?printf("YES"):printf("NO");

    return 0;
}
