//142640902 Jan/14/2022 00:38UTC+6 ItsTHEAvro A - Lucky Ticket GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    int n, i, d=0;
    char inpt[50];
    scanf("%d", &n);
    scanf("%s", &inpt);
    for(i=0; i<n; i++)
    {
        if ((inpt[i]!=52)&&(inpt[i]!=55))
        {
            printf("NO");
            return 0;
        }
    }
    n = n/2;
    for(i=0; i<n; i++)
    {
        d += (inpt[i]-inpt[n+i]);
    }
    (d==0)?printf("YES"):printf("NO");
    return 0;
}
