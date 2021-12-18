#include <stdio.h>

int main()
{
	int *n;

	//n = ((void *)0);
	n = 0;

	if (n == NULL)
		printf("got it");
	else
		printf("hey");
}
