//142641738 Jan/14/2022 00:50UTC+6 ItsTHEAvro A - Anton and Danik GNU C11 Accepted 15 ms 100 KB

#include <stdio.h>
int main()
{
    unsigned int n;
    scanf("%u", &n);

    char str[n];
    int a=0, d=0, i;
    scanf("%s", &str);
    for(i=0;i<n;i++)
    {
        (str[i]>'A')?d++:a++;
    }
    if(a>d) printf("Anton");
    else if(a<d) printf("Danik");
    else printf("Friendship");
    return 0;
}
