//143479445 	Jan/21/2022 11:18UTC+6 	ItsTHEAvro 	996A - Hit the Lottery 	GNU C11 	Accepted 	15 ms 	0 KB

#include <stdio.h>

int main()
{
    int bills[5]={100, 20, 10, 5, 1}, n, cnt=0, i=0;
    scanf("%d", &n);
    while(n>0){
        cnt+=n/bills[i];
        n%=bills[i];
        i++;
    }
    printf("%d", cnt);

    return 0;
}
