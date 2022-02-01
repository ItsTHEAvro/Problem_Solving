//144880706 	Feb/02/2022 01:31UTC+6 	ItsTHEAvro 	702A - Maximum Increase 	GNU C11 	Accepted 	15 ms 	400 KB

#include <stdio.h>

int main()
{
    int n, cnt=0, i, ans=1;
    scanf("%d", &n);
    int arr[n];
    arr[0]=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>arr[i-1]) ++cnt;
        else
        {
            if(cnt>ans)
            {
                ans=cnt;
            }
            cnt=1;
        }
    }
    if(cnt>ans)
    {
        ans=cnt;
    }
    printf("%d", ans);

    return 0;
}
