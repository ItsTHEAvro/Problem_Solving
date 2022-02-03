//145057666 	Feb/03/2022 22:45UTC+6 	ItsTHEAvro 	1426A - Floor Number 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x;
        scanf("%d%d", &n, &x);
        if(n<=2) printf("1\n");
        else
        {
            printf("%d\n", ((n-3)/x)+2);
        }

    }
    return 0;
}
