#include "libft.h"

static int	count(long int nbr)
{
	//Count the number of digits 
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

	//If it is a negative number, multiply it by -1 and add 1 to the digit counter so it's possible to allocate properly and add the negative sign at the end.
	if (n < 0)
	{
		num = num * -1;
		num_digits++;
	}
	// Allocates dynamically the number of digits +1 to add the'\0' in the end
	str = (char *)malloc(sizeof(char) * (num_digits + 1));
	if (str == NULL)
		return (NULL);
	*(str + num_digits) = '\0';

	//While the number of digits is different from 0, fill the string backwards, taking the modulus of 10 and transforming it into char by adding '0' and then dividing the number by 10
	while (num_digits--)
	{
		*(str + num_digits) = num % 10 + '0';
		num = num / 10;
	}
	//If it is a negative number add the negative sign
	if (n < 0)
		*(str + 0) = '-';
	//Return the string
	return (str);
}
