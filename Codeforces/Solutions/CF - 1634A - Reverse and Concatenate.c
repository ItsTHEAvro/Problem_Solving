//145427017 	Feb/06/2022 21:27UTC+6 	ItsTHEAvro 	A - Reverse and Concatenate 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>
#include <string.h>

int palindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if(str[l++] != str[h--]) return 0;
    }
    return 1;
}

void solve()
{
    int n, k;
    char str[110];
    scanf("%d%d%s", &n, &k, &str);
    if(k==0)
    {
        printf("1\n");
        return;
    }
    else
    {
        (palindrome(str))?printf("1\n"):printf("2\n");
        return;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        solve();
    }

    return 0;
}
