#include "libft.h"

//Checks whether a character belongs to the standard ASCII table, returning 1 if it does, and 0 otherwise. 
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
