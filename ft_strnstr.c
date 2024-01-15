
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t little_len;

	little_len = ft_strlen(little);  // Calculate the length of the 'little' string

	// If 'little' is an empty string, return 'big'
	if (little_len == 0)
		return ((char *)big);

	// Iterate through 'big' until a match with 'little' is found or until 'len' characters are searched
	while (*big != '\0' && len >= little_len)
	{
		// If the current character in 'big' matches the first character in 'little'
		// and the subsequent characters match, return the pointer to the current position in 'big'
		if (*big == *little && (ft_memcmp(big, little, little_len) == 0))
			return ((char *)big);

		big++;
		len--;
	}

	// If 'little' is not found within 'len' characters, return NULL
	return (NULL);
}
