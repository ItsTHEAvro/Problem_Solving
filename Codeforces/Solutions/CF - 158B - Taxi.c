//146762604 	Feb/17/2022 23:12UTC+6 	ItsTHEAvro 	B - Taxi 	GNU C11 	Accepted 	62 ms 	0 KB

#include <stdio.h>

int main()
{
    int n, grp[5]={0}, temp, total=0;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &temp);
        grp[temp]++;
    }

    total = grp[4]+grp[3]+grp[2]/2;
    grp[1]-=grp[3];

    if(grp[2]&1)
    {
        total++;
        grp[1]-=2;
    }

    if (grp[1]>0) total+=(grp[1]+3)/4;

    printf("%d", total);

    return 0;
}
