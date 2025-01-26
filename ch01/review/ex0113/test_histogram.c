#include "ex0113.h"

void test0(void);
void test1(void);
void test2(void);

int	main(void)
{
	test0();
	test1();
	test2();
	return (0);
}

void	test0(void)
{
	int	*lengths = NULL;

	puts("### TEST 0 ###");
	printf("Passing %p as argument.\n", lengths);
	print_horizontal_histogram(lengths);
	print_vertical_histogram(lengths);
	puts("");
	return;
}

void	test1(void)
{
	int	lengths[] = {-1};

	puts("### TEST 1 ###");
	printf("Passing an empty array [%p] as argument.\n" \
		"It has one element of value -1, marking the end of the array.\n",
		lengths);
	print_horizontal_histogram(lengths);
	print_vertical_histogram(lengths);
	puts("");
	return;
}

void	test2(void)
{
	int	lengths[] = {0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1};

	puts("### TEST 2 ###");
	printf("Passing an array with increasing values [%p] as argument.\n",
		lengths);
	print_horizontal_histogram(lengths);
	print_vertical_histogram(lengths);
	puts("");
	return;
}
