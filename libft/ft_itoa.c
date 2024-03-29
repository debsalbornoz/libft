#include "libft.h"

// Helper function to count the number of digits in a long integer, handling negative numbers.
static int get_digits(long int nbr)
{
	unsigned int counter = 1;
	
	if (nbr < 0)
		nbr = nbr * -1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		counter++;
	}
	return (counter);
}

// Converts an integer to a string.
char *ft_itoa(int n)
{
	char *str;
	size_t num_digits;
	long int num;

	num = n;

	// Count the number of digits.
	num_digits = get_digits(n);

	// Adjust the digit count if it is a negative number for the negative sign.
	if (n < 0)
	{
		num = num * -1;
		num_digits++;
	}

	// Allocate memory dynamically for the digits and the null terminator.
	str = (char *)malloc(sizeof(char) * (num_digits + 1));
	if (str == NULL)
		return (NULL);
	*(str + num_digits) = '\0';

	// Fill the string in reverse order with digits, converting them to characters.
	while (num_digits--)
	{
		*(str + num_digits) = num % 10 + '0';
		num = num / 10;
	}

	// Add the negative sign if it is a negative number.
	if (n < 0)
		*(str + 0) = '-';

	// Return the resulting string.
	return (str);
}

