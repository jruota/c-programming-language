// Write a program that prints its input one word per line.

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int		c;
	char	previous;

	previous = '\0';
	while ((c = getchar()) != EOF)
	{
		if (isspace(c))
		{
			if (!isspace(previous))
				putchar('\n');
		}
		else
			putchar(c);
		previous = c;
	}

	return (0);
}