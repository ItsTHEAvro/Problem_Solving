//143156348 Jan/18/2022 00:43UTC+6 ItsTHEAvro 282A - Bit++ GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    int n, x=0;
    scanf("%d", &n);
    while(n--)
    {
        char op[4];
        scanf("%s", &op);
        (op[1]=='+')?x++:x--;
    }
    printf("%d", x);

    return 0;
}
