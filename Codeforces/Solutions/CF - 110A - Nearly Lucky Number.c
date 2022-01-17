//142637168 Jan/13/2022 23:54UTC+6 ItsTHEAvro A - Nearly Lucky Number GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
int main()
{
    char inpt[20];
    int i, cnt=0;

    scanf("%s", &inpt);

    for(i = 0; i<strlen(inpt); i++)
    {
        ((inpt[i]==52)||(inpt[i]==55))?cnt++:"";
    }

    ((cnt==4)||(cnt==7))?printf("YES"):printf("NO");

    return 0;
}

