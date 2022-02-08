//145677417 	Feb/08/2022 23:36UTC+6 	ItsTHEAvro 	118A - String Task 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[110];
    int i;
    scanf("%s", &str1);
    for(i=0; i<strlen(str1); i++)
    {
        if(tolower(str1[i])=='a'
        || tolower(str1[i])=='e'
        || tolower(str1[i])=='i'
        || tolower(str1[i])=='o'
        || tolower(str1[i])=='u'
        || tolower(str1[i])=='y'
          ) continue;
        else
        {
            printf(".");
            printf("%c", tolower(str1[i]));
        }
    }

    return 0;
}
