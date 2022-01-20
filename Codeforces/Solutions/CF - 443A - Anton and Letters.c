//143390665 	Jan/20/2022 12:58UTC+6 	ItsTHEAvro 	443A - Anton and Letters 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int cntArr[26]={0}, i, cnt=0;
    char str[1010];
    gets(str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            cntArr[str[i]-'a']++;
        }
    }
    for(i=0; i<26; i++)
    {
        (cntArr[i]!=0)?cnt++:"";
    }
    printf("%d", cnt);

    return 0;
}
