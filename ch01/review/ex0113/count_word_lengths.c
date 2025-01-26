#include "ex0113.h"

static int	*increment_word_length(int *arr, size_t size, size_t index);

int	*count_word_lengths(int fd)
{
	char			buffer[1];
	int				*lengths;
	unsigned int	max_length;
	unsigned int	word_length;

	buffer[0] = '\0';
	lengths = NULL;
	max_length = 0;
	word_length = 0;
	while (read(fd, buffer, 1) > 0)
	{
		// DEBUG ###############################################################
		// puts("### DEBUG INFO ###");
		// print_program_state(fd, max_length, word_length, buffer, lengths);
		// puts("### DEBUG INFO END ###");
		// DEBUG END ###########################################################
		if (isspace(buffer[0]))
		{
			/* if (word_length > 0)
			{
				if (!lengths)
				{
					lengths = calloc(word_length + 2, sizeof (int));
					if (!lengths)
					{
						puts("MEMORY ALLOCATION ERROR");
						return (NULL);
					}
					lengths[0] = 0;
					lengths[word_length + 1] = -1;
				}
				if (word_length > max_length)
				{
					new = reallocarray(
						lengths,
						word_length + 2,
						sizeof (int));
					if (!new)
					{
						puts("MEMORY ALLOCATION ERROR");
						free(lengths);
						return (NULL);
					}
					lengths = new;
					new = NULL;
					index = max_length + 1;
					while (index < (word_length + 2))
					{
						if (index == (word_length + 1))
							lengths[index] = -1;
						else
							lengths[index] = 0;
						++index;
					}
					max_length = word_length;
				}
				++lengths[word_length];
				word_length = 0;
			} */
			if (word_length > 0)
			{
				lengths = increment_word_length(
					lengths,
					max_length,
					word_length);
				if (!lengths)
					return (NULL);
			}
			if (word_length > max_length)
				max_length = word_length;
			word_length = 0;
		}
		else
			++word_length;
	}
	if (word_length > 0)
		lengths = increment_word_length(lengths, max_length, word_length);
	if (!lengths)
		return (NULL);
	return (lengths);
}

static int	*increment_word_length(int *arr, size_t size, size_t index)
{
	unsigned int	i;
	int				*new;

	if (!arr)
	{
		arr = calloc(index + 2, sizeof (int));
		if (!arr)
		{
			puts("MEMORY ALLOCATION ERROR");
			return (NULL);
		}
		arr[0] = 0;
		arr[index + 1] = -1;
	}
	else if (index > size)
	{
		new = reallocarray(arr, index + 2, sizeof (int));
		if (!new)
		{
			puts("MEMORY ALLOCATION ERROR");
			free(arr);
			return (NULL);
		}
		arr = new;
		new = NULL;
		i = size + 1;
		while (i <= index)
			arr[i++] = 0;
		arr[index + 1] = -1;
	}
	++arr[index];
	return (arr);
}
