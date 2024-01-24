#include "libft.h"

//Converts an lowercase letter to its corresponding uppercase letter.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
