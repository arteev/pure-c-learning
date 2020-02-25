
#include <stdio.h>

#define SPACE 32

int main()
{
	int c, n1=0;

	while((c=getchar()) != EOF)
	{
		if (c == SPACE)
		{
			if (n1) continue;
			n1 = 1;	
		} 
		else
			n1 = 0;
		putchar(c);
	}
}
