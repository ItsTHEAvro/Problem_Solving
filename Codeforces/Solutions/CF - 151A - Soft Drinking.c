//142646154 Jan/14/2022 02:13UTC+6 ItsTHEAvro A - Soft Drinking GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int min(int a, int b)
{
    return (a>b)?b:a;
}
int main()
{
    int inpt[8], x, y, z, i;
    for(i=0; i<8; i++)
    {
        scanf("%d", &inpt[i]);
    }
    x = inpt[1]*inpt[2]/inpt[6];
    y = inpt[3]*inpt[4];
    z = inpt[5]/inpt[7];
    x = min(x, min(y,z));
    printf("%d", x/inpt[0]);
    return 0;
}
