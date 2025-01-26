#include "ex0113.h"

#define MAX_HIST_H 60.0
#define MAX_HIST_V 20.0

void	print_horizontal_histogram(int *lengths)
{
	int	height;
	int	index;
	int	max_count;

	if (!lengths)
	{
		puts("Nothing to print.");
		return ;
	}
	index = 1;
	max_count = 0;
	while (lengths[index] >= 0)
	{
		if (lengths[index] > max_count)
			max_count = lengths[index];
		++index;
	}
	if (max_count == 0)
	{
		puts("Nothing to print.");
		return ;
	}
	index = 1;
	while (lengths[index] >= 0)
	{
		height = (MAX_HIST_H * lengths[index] / max_count);
		printf("[%2d] ", index);
		if ((height == 0) && (lengths[index] > 0))
			printf("+");
		else
		{
			while (height > 0)
			{
				printf("#");
				--height;
			}
		}
		putchar('\n');
		++index;
	}
	return ;
}

void	print_vertical_histogram(int *lengths)
{
	int	index;
	int	max_count;
	int	row;

	if (!lengths)
	{
		puts("Nothing to print.");
		return ;
	}
	index = 1;
	max_count = 0;
	while (lengths[index] >= 0)
	{
		if (lengths[index] > max_count)
			max_count = lengths[index];
		++index;
	}
	if (max_count == 0)
	{
		puts("Nothing to print.");
		return ;
	}
	row = MAX_HIST_V;
	while (row > 0)
	{
		index = 1;
		while (lengths[index] >= 0)
		{
			if ((row == 1)
				&& (lengths[index] > 0)
				&& ((MAX_HIST_V * lengths[index] / max_count) < 1))
			{
				printf("   + ");
			}
			else if ((MAX_HIST_V * lengths[index] / max_count) >= row)
				printf("  # ");
			else
				printf("    ");
			++index;
		}
		putchar('\n');
		--row;
	}
	index = 1;
	while (lengths[index] >= 0)
	{
		printf("[%2d]", index);
		++index;
	}
	putchar('\n');
	return ;
}
