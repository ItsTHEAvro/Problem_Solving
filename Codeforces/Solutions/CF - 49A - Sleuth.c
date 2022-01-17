//143061592 Jan/17/2022 11:20UTC+6 ItsTHEAvro A - Sleuth GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    char str[110];
    int i, c=0;
    gets(str);

    for(i=0; i<strlen(str); i++)
        (str[i]!=' ')?str[c++] = str[i]:"";
    str[c] = '\0';

    (toupper(str[strlen(str)-2])=='A'||
     toupper(str[strlen(str)-2])=='E'||
     toupper(str[strlen(str)-2])=='I'||
     toupper(str[strlen(str)-2])=='O'||
     toupper(str[strlen(str)-2])=='U'||
     toupper(str[strlen(str)-2])=='Y'
    )?printf("YES"):printf("NO");
    return 0;
}
