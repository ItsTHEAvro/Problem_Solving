//148488567 	Mar/05/2022 23:56UTC+6 	ItsTHEAvro 	131A - cAPS lOCK 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[110];
    int i, flag=1;
    scanf("%s", &str);

    for(i=1; i<strlen(str); i++)
    {
        if(islower(str[i])) flag=0;
    }

    if(flag)
    {
        for(i=0; i<strlen(str); i++)
        {
            if(islower(str[i])) printf("%c", toupper(str[i]));
            else printf("%c", tolower(str[i]));
        }
    }

    else printf("%s", str);

    return 0;
}
