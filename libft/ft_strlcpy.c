#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t src_len;

	i = 0;
	src_len = ft_strlen(src); 

	if (dst == NULL || src == NULL)
		return (0);
	// If size is 0, return the length of the source string
	else if (size == 0)
		return (src_len);

	// Copy characters from src to dst until size - 1 characters are copied or src ends
	while (i < size - 1 && *src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	*dst = '\0';

	// Return the total length of the source string
	return (src_len);
}
