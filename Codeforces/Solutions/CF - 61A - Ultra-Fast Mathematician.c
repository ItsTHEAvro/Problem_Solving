//142697492 Jan/14/2022 18:08UTC+6 ItsTHEAvro A - Ultra-Fast Mathematician GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    char a[1000], b[1000];
    int i=0;
    while(scanf("%s%s", &a, &b)==2)
    {
        for(i=0; i<strlen(a); i++)
        {
            (a[i]==b[i])?printf("0"):printf("1");
        }
    }
    return 0;
}
