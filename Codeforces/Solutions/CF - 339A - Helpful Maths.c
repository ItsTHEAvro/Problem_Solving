//143159886 Jan/18/2022 01:48UTC+6 ItsTHEAvro 339A - Helpful Maths GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>

void sort(int arr[], int len)
{
    int i, j, temp;
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    char s[110];
    int s1[110], i, cnt=0;
    scanf("%s", &s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]!='+')
        {
            s1[cnt++]=s[i]-'0';
        }
    }

    sort(s1, cnt);

    for(i=0; i<cnt; i++)
    {
        printf("%d", s1[i]);
        (i<cnt-1)?printf("+"):"";
    }

    return 0;
}
