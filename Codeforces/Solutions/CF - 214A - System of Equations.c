//142584277 Jan/13/2022 14:47UTC+6 ItsTHEAvro A - System of Equations GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    int m, n, i, j, c = 0;

    scanf("%d%d", &n, &m);

    for(i = 0; i <= 32; i++)
    {
        for (j = 0; j <=32; j++)
        {
            ((i*i+j == n) && (i+j*j == m)) ? c++ : "";
        }
    }
    printf("%d", c);
    return 0;
}
