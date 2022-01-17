//143138377 Jan/17/2022 21:25UTC+6 ItsTHEAvro 1146A - Love "A" GNU C11 Accepted 15 ms 0 KB

#include <stdio.h>

int main()
{
    char s[55];
    int i, aCnt=0;
    scanf("%s", &s);
    while(s[i]!='\0')
    {
        (s[i]=='a')?aCnt++:"";
        i++;
    }

    while(2*aCnt-1!=i && 2*aCnt-1<i)
    {
        i--;
    }
    printf("%d", i);
    return 0;
}
