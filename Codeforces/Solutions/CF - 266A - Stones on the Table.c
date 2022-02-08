//145676125 	Feb/08/2022 23:21UTC+6 	ItsTHEAvro 	266A - Stones on the Table 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, count = 0;
    char str[55];
    scanf("%d%s", &n, &str);
    for(i=1; i<strlen(str); i++)
    {
        (str[i-1]==str[i])?++count:"";
    }
    printf("%d", count);

    return 0;
}
