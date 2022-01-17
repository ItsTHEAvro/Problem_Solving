//142576207 Jan/13/2022 13:18UTC+6 ItsTHEAvro A - Boy or Girl GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

int main()
{
    char uname[100];
    int countArray[26]= {0};
    int pos, i = 0, c=0;
    gets(uname);
    while(uname[i] != '\0')
    {
        pos = uname[i]-'a';
        countArray[pos]+=1;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if(countArray[i]>0) c++;
    }
    (c%2 == 0)? printf("CHAT WITH HER!"):printf("IGNORE HIM!");
    return 0;
}
