//142728556 Jan/14/2022 23:28UTC+6 ItsTHEAvro A - Triangular numbers GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    int num;
    while(scanf("%d", &num)==1)
    {
        int sum = 0, i;
        for(i=1; sum<num; i++)
        {
            sum += i;
        }
        (sum==num)?printf("YES"):printf("NO");
    }
    return 0;
}
