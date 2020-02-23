#include <stdio.h>

int main()
{
	int c;
	int st = 0;
	while((st = ((c = getchar()) == EOF)) != 1)
	{	
		if (st==0) putchar(c);
	}
	return 0;
}
