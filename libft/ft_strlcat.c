#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_len;
	size_t src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src); 

	// If size is less than or equal to the length of the destination string, return (size + src_len)
	if (size <= dst_len)
		return (size + src_len);

	// Find the end of the destination string
	while (dst[i] != '\0' && i < size - 1)
		i++;

	// Copy characters from src to dst until the end of src or size - 1
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}

	dst[i] = '\0'; 

	// Return the total length of the string that would have been created if size was sufficiently large
	return (dst_len + src_len);
}
