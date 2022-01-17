//142586684 Jan/13/2022 15:13UTC+6 ItsTHEAvro A - LLPS GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    char str[10], max = "a";
    int i, n = 0, cnt = 1;
    gets(str);

    while(str[n] != '\0') n++;

    for(i = 0; i<n; i++)
    {
        if(max < str[i])
        {
            max = str[i];
            cnt = 1;
        }

        else if(max == str[i]) cnt++;
    }
    for(i = 1; i <= cnt; i++) printf("%c", max);

    return 0;
}
