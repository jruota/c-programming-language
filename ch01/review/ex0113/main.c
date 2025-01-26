#include "ex0113.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	*lengths;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			puts("FILE ERROR: could not open file");
			close(fd);
			return (1);
		}
		lengths = count_word_lengths(fd);
		if (!lengths)
		{
			close(fd);
			return (1);
		}
		print_horizontal_histogram(lengths);
		putchar('\n');
		print_horizontal_histogram(lengths);
		free(lengths);
		close(fd);
		return (0);
	}
	else
	{
		printf("ARGUMENT ERROR: %d argument(s) given, 2 expected\n", argc);
		return (1);
	}
}
