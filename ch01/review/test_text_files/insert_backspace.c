#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	bytes_written;
	int	fd;
	int	i;

	fd = open("includes_backspace.txt", O_CREAT && O_WRONLY);
	printf("\t### DEBUG: fd -> %d\n", fd);
	if (fd == -1)
	{
		puts("FILE ERROR");
		return (1);
	}

	i = 0;
	while (i < 10)
	{
		bytes_written = write(fd, "Hello, World!\b\n", 15);
		printf("\t### DEBUG: bytes_written -> %d\n", bytes_written);
		++i;
	}
	bytes_written = write(fd, "\n", 1);
	printf("\t### DEBUG: bytes_written -> %d\n", bytes_written);

	close(fd);
	return (0);
}