//142633645 Jan/13/2022 23:15UTC+6 ItsTHEAvro A - Next Round GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    int n, k, i, cnt = 0, marks[100];

    scanf("%d%d", &n, &k);

    for(i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
    }

    for(i=0; i<n; i++)
    {
        if((marks[i] != 0) && (marks[i] >= marks[k-1])) cnt++;
    }

    printf("%d", cnt);
    return 0;
}
