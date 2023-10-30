void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	
	// Handle the smallest possible int directly
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}

	// Extract the last digit of 'n' and convert it to a char 'c'
	c = n % 10 + '0';

	// Handle negative numbers by adding the negative sign and converting to positive
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		c = n % 10 + '0';
	}

	// Recursively process the remaining digits of the number
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}

	// Write the digit transformed into a char to the file descriptor
	write(fd, &c, 1);
}
