#ifndef EX0113_H
# define EX0113_H

# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		*count_word_lengths(int fd);

void	print_horizontal_histogram(int *lengths);
void	print_vertical_histogram(int *lengths);

// the following functions are for DEBUGGING
void	print_program_state(
	int fd,
	int max_length,
	int word_length,
	char *buffer,
	int *lengths);
void	print_int_array(int *arr, size_t size);
// DEBUGGING over

#endif
