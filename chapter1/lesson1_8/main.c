#include <stdio.h>

int main()
{
	int c, n1=0, ns=0, nt=0;

	while((c=getchar()) != EOF)
	{
		if (c == '\n')
			++n1;
		else if (c == '\t')
			++nt;
		else if (c == 32)
			++ns;
	}
	
	printf("lines:\t%d\ntabs:\t%d\nspaces:\t%d\n", n1, nt, ns);
}
