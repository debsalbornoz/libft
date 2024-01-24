
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (*big != '\0' && len >= little_len)
	{
		/* If the current character in 'big' matches the first character in 'little' and the subsequent characters match,
		return the pointer to the current position in 'big'*/
		if (*big == *little && (ft_memcmp(big, little, little_len) == 0))
			return ((char *)big);

		big++;
		len--;
	}
	return (NULL);
}
