//144729941 	01:16:34 	ItsTHEAvro 	A - Div. 7 	GNU C11 	Accepted 	0 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);

        if(n%7==0) printf("%d\n", n);

        else
        {
            int x = n%7;
            int y = 7-x;
            if(n%10>=7) printf("%d\n", n-x);
            else if(n%10<=3) printf("%d\n", n+y);
            else
            {
                int z = n%10;
                if(z>=x) printf("%d\n", n-x);
                else printf("%d\n", n+y);
            }
        }
    }

    return 0;
}
