#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;

	// Compare characters until one of the strings ends or 'n' characters are compared
	while ((*s1 != '\0' || *s2 != '\0') && (i < n))
	{
		// If characters are not equal, return the difference as an integer
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);

		s1++;
		s2++;
		i++;
	}

	// Return 0 if the first 'n' characters of both strings match
	return (0);
}

