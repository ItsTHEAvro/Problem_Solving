//142609755 Jan/13/2022 19:20UTC+6 ItsTHEAvro A - Petya and Strings GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
#include <string.h>
int main()
{

    int i = 0;
    char str1[100], str2[100];
    gets(str1);
    gets(str2);

    while (str1[i]) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
        i++;
    }

    printf("%d", strcmp(str1, str2));

    return 0;
}
