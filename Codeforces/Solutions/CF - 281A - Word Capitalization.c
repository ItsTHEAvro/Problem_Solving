//142631218 Jan/13/2022 22:49UTC+6 ItsTHEAvro A - Word Capitalization GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    char w[1000];
    scanf("%s", &w);
    (w[0] >= 97) ? w[0] = w[0]-32 : "";
    printf("%s", w);
    return 0;
}
