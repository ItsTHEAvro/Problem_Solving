//143872399 	Jan/24/2022 18:25UTC+6 	ItsTHEAvro 	1352A - Sum of Round Numbers 	GNU C11 	Accepted 	218 ms 	0 KB

#include <stdio.h>

int power(int n, int p)
{
    int i, res=1;
    for(i=1; i<=p; i++) res*=n;
    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, count=0, i=0, ans[6]= {0};
        scanf("%d", &n);
        while(n!=0)
        {
            if(n%10!=0)
            {
                ans[count++] = (n%10)*power(10, i);
            }
            i++;
            n/=10;
        }
        printf("%d\n", count);
        for(i=0; i<count; i++) printf("%d ", ans[i]);
        printf("\n");
    }

    return 0;
}
