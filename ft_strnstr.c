
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (*big != '\0' && len >= little_len)
	{
		if (*big == *little && (ft_memcmp(big, little, little_len) == 0))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
