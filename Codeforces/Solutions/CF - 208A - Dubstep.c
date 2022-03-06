//148513134 	Mar/06/2022 10:02UTC+6 	ItsTHEAvro 	208A - Dubstep 	GNU C11 	Accepted 	30 ms 	0 KB

#include <stdio.h>
#include <string.h>

int main()
{
    char str[210];
    int i;
    scanf("%s", &str);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            printf(" ");
        }
        else printf("%c", str[i]);
    }

    return 0;
}
