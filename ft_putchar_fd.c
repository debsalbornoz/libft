#include "libft.h"

//Writes the character 'c' to the file descriptor specified.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
