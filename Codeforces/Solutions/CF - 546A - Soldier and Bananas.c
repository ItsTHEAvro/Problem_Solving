//143344408 Jan/19/2022 21:45UTC+6 ItsTHEAvro 546A - Soldier and Bananas GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    int k, n, w, p;
    scanf("%d%d%d", &k, &n, &w);
    p=(w*(w+1)*k)/2;
    (p>n)?printf("%d", p-n):printf("0");

    return 0;
}
