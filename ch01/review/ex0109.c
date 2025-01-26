// Write a program to copy its input to its output, replacing each string of
// one or more blanks by a single blank.

#include <stdio.h>

int	main(void)
{
	int	c;
	int	previous;

	previous = '\0';

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			if (previous != c)
				putchar(c);
		else
			putchar(c);

		previous = c;
	}

	return (0);
}