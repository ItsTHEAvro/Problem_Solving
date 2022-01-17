//142648518 Jan/14/2022 03:16UTC+6 ItsTHEAvro A - Amusing Joke GNU C11 Accepted 30 ms 0 KB

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b )
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void sort(char *word)
{
	for (int i = 0; i < strlen(word) - 1; i++)
		for (int j = i + 1; j < strlen(word); j++)
			if (word[i] > word[j])
				swap(&word[i], &word[j]);
}

int main()
{
    int i;
	char a[1000], b[1000], c[1000];

	scanf("%s", &a);
	scanf("%s", &b);
    strcat(a, b);
    scanf("%s", &c);
    sort(a);
    sort(c);
    (strcmp(a, c)==0)?printf("YES"):printf("NO");
	return 0;
}

