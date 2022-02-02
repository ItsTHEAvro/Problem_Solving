//144924050 	Feb/02/2022 16:12UTC+6 	ItsTHEAvro 	490A - Team Olympiad 	GNU C11 	Accepted 	31 ms 	100 KB

#include <stdio.h>

int min(int a, int b)
{
    return ((a>b)?b:a);
}

int main()
{
    int n, i, pc=0, mc=0, pec=0, x;
    scanf("%d", &n);
    int P[n], M[n], PE[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x==1)
        {
            P[++pc]=i;
        }
        else if(x==2)
        {
            M[++mc]=i;
        }
        else
        {
            PE[++pec]=i;
        }
    }

    x = min(min(pc, mc), pec);

    printf("%d\n", x);
    for(i=1; i<=x; i++)
    {
        printf("%d %d %d\n", P[i], M[i], PE[i]);
    }

    return 0;
}
