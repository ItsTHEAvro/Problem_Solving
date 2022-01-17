//142730717 Jan/14/2022 23:53UTC+6 ItsTHEAvro A - Translation GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    char w1[120], w2[120];
    int i = 0;
    scanf("%s%s", &w1, &w2);
    while(w1[i])
    {
        if (w1[i] != w2[strlen(w1)-1-i])
        {
            printf("NO");
            return 0;
        }
        i++;
    }
    printf("YES");

    return 0;
}
