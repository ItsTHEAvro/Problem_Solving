//149086190	Mar/10/2022 19:38UTC+6	ItsTHEAvro	1624A - Plus One on the Subset	GNU C11	Accepted	124 ms	0 KB

#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, temp, max=0, min=1000000000;
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d", &temp);
			if(max<temp) max=temp;
			if(min>temp) min=temp;
		}
		printf("%d\n",max-min);		
	}
	return 0;
}
