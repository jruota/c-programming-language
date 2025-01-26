// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int	main(void)
{
	int	c;
	int	blanks;
	int	tabs;
	int	newlines;

	blanks = 0;
	tabs = 0;
	newlines = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;
		else if (c == '\n')
			++newlines;
	}

	printf("blanks:\t\t%d\n", blanks);
	printf("tabs:\t\t%d\n", tabs);
	printf("newlines:\t%d\n", newlines);

	return (0);
}
