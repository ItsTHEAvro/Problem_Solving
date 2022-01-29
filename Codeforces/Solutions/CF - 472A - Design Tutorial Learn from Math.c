//143909949 	Jan/25/2022 01:16UTC+6 	ItsTHEAvro 	472A - Design Tutorial: Learn from Math 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    (n&1)?printf("9 %d", n-9):printf("4 %d", n-4);

    return 0;
}
