#include "libft.h"

//Writes the string s followed by a newline character to the specified file descriptor 

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}