#include <stdio.h>

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -17.8;
	upper = 130.0;
	step = 10.0;

	printf(" C \t  F\n");
	printf("===\t======\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (int)(celsius / (5.0/9.0) + 32.0);
		printf("%6.1f\t%3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
