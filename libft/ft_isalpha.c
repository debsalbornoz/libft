#include "libft.h"

//Checks whether a character is an alphabet letter, returning 1 if it is, and 0 otherwise.
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
