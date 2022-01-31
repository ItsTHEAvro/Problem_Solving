//144739194 	01:32:40 	ItsTHEAvro 	B - Minority 	GNU C11 	Accepted 	62 ms 	200 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char str[210000];
        int z=0, o=0, i;
        scanf("%s", &str);

        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='0') z++;
            else o++;
        }

        if(z==o)
        {
            if(z==1) printf("0\n");
            else if(z>1) printf("%d\n", z-1);
        }
        else if(z>o) printf("%d\n", o);
        else printf("%d\n", z);
    }

    return 0;
}
