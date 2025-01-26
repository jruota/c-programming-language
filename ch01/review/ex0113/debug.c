#include "ex0113.h"

void	print_int_array(int *arr, size_t size)
{
	unsigned int	index;

	if (!arr)
		printf("%p\n", arr);
	else
	{
		printf("{");
		index = 0;
		while (index <= size)
		{
			if (index == 0)
				printf("[%d]%d", index, arr[index]);
			else
				printf(", [%d]%d", index, arr[index]);
			++index;
		}
		printf("}\n");
	}
	return ;
}

void	print_program_state(
	int fd,
	int max_length,
	int word_length,
	char *buffer,
	int *lengths)
{
	printf("fd\t\t\t->\t%d\n", fd);
	printf("max_length\t\t->\t%d\n", max_length);
	printf("word_length\t\t->\t%d\n", word_length);
	printf("current character\t->\t'%c'[%d]\n", buffer[0], buffer[0]);
	printf("lengths\t\t\t->\t");
	print_int_array(lengths, max_length);
	return ;
}
