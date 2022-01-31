//144607765 	Jan/31/2022 09:03UTC+6 	ItsTHEAvro 	58A - Chat room 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    char str[1000], hlw[5]={'h','e','l','l','o'};
    gets(str);
    int i, j=0, count=0;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==hlw[j])
        {
            count++;
            j++;

            if(count==5) break;
        }
    }
    (count==5)?printf("YES"):printf("NO");

    return 0;
}
