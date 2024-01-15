#include "libft.h"

//Checks whether a character is a printable character, returning 1 if it is, and 0 otherwise. 
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
