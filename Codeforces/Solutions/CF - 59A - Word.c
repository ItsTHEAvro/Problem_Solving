//142642345 Jan/14/2022 00:59UTC+6 ItsTHEAvro A - Word GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    int u=0,l=0,i;
    char word[100];
    scanf("%s", &word);
    for(i=0; i<strlen(word); i++)
    {
        (word[i]>='a')?l++:u++;
    }
    if(u>l)
    {
        for(i=0; i<strlen(word); i++)
        {
            printf("%c", toupper(word[i]));
        }
    }
    else
    {
        for(i=0; i<strlen(word); i++)
        {
            printf("%c", tolower(word[i]));
        }
    }

    return 0;
}
