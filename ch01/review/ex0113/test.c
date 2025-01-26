#include "ex0113.h"

void	test0(void);
void	test1(void);
void	test2(void);
void	test3(void);
void	test4(void);
void	test5(void);
void	test6(void);
void	test7(void);
void	test8(void);
void	test9(void);
void	test10(void);
void	test11(void);
void	test12(void);
void	test13(void);
void	test14(void);
void	test15(void);

int	main(void)
{
	test0();
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	test12();
	test13();
	test14();
	test15();

	return (0);
}

void	test0(void)
{
	int				fd;
	char			*file = "../test_text_files/empty.txt";
	int	*lengths;

	puts("### TEST 0 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test1(void)
{
	int				fd;
	char			*file = "../test_text_files/includes_backspace.txt";
	int	*lengths;

	puts("### TEST 1 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test2(void)
{
	int				fd;
	char			*file = "../test_text_files/includes_tabs.txt";
	int	*lengths;

	puts("### TEST 2 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test3(void)
{
	int				fd;
	char			*file = "../test_text_files/invictus.txt";
	int	*lengths;

	puts("### TEST 3 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test4(void)
{
	int				fd;
	char			*file = "../test_text_files/longer_and_shorter_lines.txt";
	int	*lengths;

	puts("### TEST 4 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test5(void)
{
	int				fd;
	char			*file = "../test_text_files/longest_word_last.txt";
	int	*lengths;

	puts("### TEST 5 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test6(void)
{
	int				fd;
	char			*file = "../test_text_files/multiple_spaces.txt";
	int	*lengths;

	puts("### TEST 6 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test7(void)
{
	int				fd;
	char			*file = "../test_text_files/newlines.txt";
	int	*lengths;

	puts("### TEST 7 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test8(void)
{
	int				fd;
	char			*file = "../test_text_files/no_access.txt";
	int	*lengths;

	puts("### TEST 8 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test9(void)
{
	int				fd;
	char			*file = "../test_text_files/normal_text.txt";
	int	*lengths;

	puts("### TEST 9 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test10(void)
{
	int				fd;
	char			*file = "../test_text_files/short_lines.txt";
	int	*lengths;

	puts("### TEST 10 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test11(void)
{
	int				fd;
	char			*file = "../test_text_files/single_long_line.txt";
	int	*lengths;

	puts("### TEST 11 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test12(void)
{
	int				fd;
	char			*file = "../test_text_files/test.txt";
	int	*lengths;

	puts("### TEST 12 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test13(void)
{
	int				fd;
	char			*file = "../test_text_files/wc_test_file.txt";
	int	*lengths;

	puts("### TEST 13 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test14(void)
{
	int				fd;
	char			*file = "../test_text_files/non_existing_file.txt";
	int	*lengths;

	puts("### TEST 14 ###");
	printf("reading from '%s' ...\n", file);

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}

void	test15(void)
{
	int				fd;
	char			*file = "PASSING A RANDOM FILE DESCRIPTOR (INT)";
	int	*lengths;

	puts("### TEST 15 ###");
	printf("reading from '%s' ...\n", file);

	fd = 42;
	if (fd == -1)
	{
		puts("FILE ERROR: could not open file");
		close(fd);
		return ;
	}
	lengths = count_word_lengths(fd);
	if (!lengths)
	{
		close(fd);
		return ;
	}
	print_horizontal_histogram(lengths);
	putchar('\n');
	print_vertical_histogram(lengths);
	free(lengths);
	close(fd);
	putchar('\n');
	return ;
}
