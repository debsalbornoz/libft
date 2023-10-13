#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (0);
	else if (size == 0)
		return (src_len);
	while (i < size - 1 && *src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	*dst = '\0';
	return (src_len);
}