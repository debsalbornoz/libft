#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	
	//If n is the largest possible int write directly
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	//Take the last digit of int making the modulus by 10 and transform it into a char c by adding '0'. This is the base case of the recursion
	c = n % 10 + '0';
	//If it is a negative number, add the negative sign at the beginning and turn it into a positive number. Take the last digit and turn it into a char
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		c = n % 10 + '0';
	}
	//If it is a number with more than two digits, use recursion with the number divided by 10 until reach a number with just one digit.
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	//Write the number transformed into a char
	write(fd, &c, 1);
}
