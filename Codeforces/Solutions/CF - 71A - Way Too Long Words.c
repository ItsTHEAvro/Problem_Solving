//142630563 Jan/13/2022 22:43UTC+6 ItsTHEAvro A - Way Too Long Words GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    int n;
    char w[100];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", &w);
        if (strlen(w) > 10)
        {
            printf("%c%d%c\n", w[0], strlen(w)-2, w[strlen(w) - 1]);
        }
        else
        {
            printf("%s\n", w);
        }
    }
    return 0;
}
