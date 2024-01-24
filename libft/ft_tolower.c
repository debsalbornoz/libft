#include "libft.h"

//Converts an uppercase letter to its corresponding lowercase letter.
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
