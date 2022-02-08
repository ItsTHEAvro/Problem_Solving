//145679111 	Feb/08/2022 23:52UTC+6 	ItsTHEAvro 	A - Football 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>
#include <string.h>

int main()
{
    int i, count=1;
    char str[110];
    scanf("%s", &str);
    for(i=1; i<strlen(str); i++)
    {
        if(str[i]==str[i-1])
        {
            ++count;
            if(count==7) break;
        }
        else count=1;
    }
    (count==7)?printf("YES"):printf("NO");

    return 0;
}
