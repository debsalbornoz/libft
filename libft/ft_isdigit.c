#include "libft.h"

//Checks whether a character is a numeric digit, returning 1 if it is, and 0 otherwise.
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
