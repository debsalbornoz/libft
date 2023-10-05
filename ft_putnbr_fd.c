#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	c = n % 10 + '0';
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		c = n % 10 + '0';
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	write(fd, &c, 1);
}