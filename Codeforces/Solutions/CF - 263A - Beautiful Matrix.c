//144928335 	Feb/02/2022 16:59UTC+6 	ItsTHEAvro 	263A - Beautiful Matrix 	GNU C11 	Accepted 	60 ms 	0 KB

#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, matrix[6][6]= {0}, ans;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j]==1)
            {
                ans = abs(3-i)+abs(3-j);
            }
        }
    }
    printf("%d", ans);

    return 0;
}
