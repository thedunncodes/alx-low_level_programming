#include <stdio.h>
#include "main.h"

void reset_to_98(int *n) 
{
	*n = 98;
}

int main(void)
{
	int p;
	p = 402;

	printf("n=%d\n", p);
	reset_to_98(&p);
	printf("n=%d\n", p);

	return (0);
}
