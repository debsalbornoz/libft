#include "libft.h"

static int	count(long int nbr)
{
	unsigned int	i;

	i = 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		num_digits;
	long int	num;

	num = n;
	num_digits = count(n);
	if (n < 0)
	{
		num = num * -1;
		num_digits++;
	}
	str = (char *)malloc(sizeof(char) * (num_digits + 1));
	if (str == NULL)
		return (NULL);
	*(str + num_digits) = '\0';
	while (num_digits--)
	{
		*(str + num_digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
