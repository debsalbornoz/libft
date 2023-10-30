#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	
	// Iterate through the characters of the string 's'
	while (s[i])
	{
		// Apply the function 'f' to the current character and its index
		f(i, &s[i]);
		i++;
	}
}
