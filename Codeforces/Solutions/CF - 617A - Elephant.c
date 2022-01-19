//143345693 Jan/19/2022 22:00UTC+6 ItsTHEAvro 617A - Elephant GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    (n%5==0)?printf("%d", n/5):printf("%d", (n/5)+1);

    return 0;
}
